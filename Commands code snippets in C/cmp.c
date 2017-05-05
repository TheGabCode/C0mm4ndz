#include <stdio.h>
#include <string.h>
#define MAX 1000

int main(int argc, char *argv[]) {
  char c1, c2;
  char s1[MAX], s2[MAX];
  char *p1;
  char *p2;
  FILE *fp1;
  FILE *fp2;
  p1 = s1;
  p2 = s2;
  int line1 = 1;
  int line2 = 1;
  int line = 0;
  int i, j;
  int c = 0;
  int w = 0;
  if (argc != 3) {
    printf("Wrong use of program \n ");
    return -1;
  }
  fp1 = fopen(argv[1], "r");
  fp2 = fopen(argv[2], "r");
  if (fp1 == NULL || fp2 == NULL) {
    printf("One or both of the files can't be used \n ");
    return -1;
  }
  c1 = getc(fp1);
  c2 = getc(fp2);
  while ((c1 != EOF) && (c2 != EOF)) {
    for (; c1 != '\n'; p1++) {
        
    w++;
    printf("%d\n",w);
        *p1 = c1;
        c1 = getc(fp1);
    }
    *p1 = '\0';
    for (; c2 != '\n'; p2++) {
        *p2 = c2;
        c2 = getc(fp2);
    }
    *p2 = '\0';
    if ((strcmp(s1, s2)) != 0) {
      line++;
      for(i = 0; i < strlen(s1); i++){
        c++;
        /*printf("%c\n",s1[i]);
        printf("%c\n",s2[i]);
        */
        if(s1[i] != s2[i]){
          printf("%s %s differ: byte %d, line %d \n",argv[1],argv[2],c,line);
          return 0;
        }
      }

/*        printf("Line %d from %s : %s\n",line1,argv[1], s1);
        printf("Line %d from %s : %s\n",line2,argv[2], s2);*/
        return 0;
    }
    c1 = getc(fp1);
    c2 = getc(fp2);
    p1 = s1;
    p2 = s2;
  }
  if (c1 != EOF || c2 != EOF)
    printf("One of the files ended prematurely\n");
  return 0;
}
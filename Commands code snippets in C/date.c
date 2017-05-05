#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf("%s\n", asctime(tm));
    
    //refs: http://stackoverflow.com/questions/1442116/how-to-get-date-and-time-value-in-c-program
}

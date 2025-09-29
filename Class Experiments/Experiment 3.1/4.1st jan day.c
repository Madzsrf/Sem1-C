#include <stdio.h>
void main() {
    int year,day,leap,total;

    printf("Enter a year: ");
    scanf("%d",&year);

    leap=(year-1)/4-(year-1)/100+(year-1)/400;

    total=(year-1)*365+leap;

    day=total%7;
    if (day==0) {
        printf("1st January is a Sunday.\n");
    } else if (day==1) {
        printf("1st January is a Monday.\n");
    } else if (day==2) {
        printf("1st January is a Tuesday.\n");
    } else if (day==3) {
        printf("1st January is a Wednesday.\n");
    } else if (day==4) {
        printf("1st January is a Thursday.\n");
    } else if (day==5) {
        printf("1st January is a Friday.\n");
    } else if (day==6) {
        printf("1st January is a Saturday.\n");
    } else {
        printf("Invalid day value.\n");
    }
}
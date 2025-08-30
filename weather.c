#include <stdio.h>

typedef enum {
    WINTER,
    SPRING,
    SUMMER,
    FALL,
}Season;

int main() {
    int month;
    Season s;
    
    printf("Enter the the numner of month 1-12: ");
    scanf("%d", &month);
    
    if (s==12 || s==1 || s==2){
        s=WINTER;
        printf("Weather is Winter: ");
    } else if(month==3 || month==4 || month==5) {
        s=SPRING;
        printf("Weather is Spring: ");
    } else if(month==6 || month==7 || month==8) {
        s=SUMMER;
        printf("Weather is Summer: ");
    } else if(month==9 || month==10 || month==11){
        s=FALL;
        printf("Weather is Fall: ");
    } else {
        printf("Invalid month: ");
    }
    
    return 0;
}

#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN,
}Light;

int main() {
    int signal;
    Light l;
    
    printf("Enter a signal number 0-2: ");
    scanf("%d", &signal);
    
    if(signal==0){
        l = RED;
    } else if(signal==1){
        l = YELLOW;
    } else if(signal==2){
        l=GREEN;
    }
    
    switch(l) {
    case RED:
    printf("STOP");
    break;
    
    case YELLOW:
    printf("Ready");
    break;
    
    case GREEN:
    printf("GO");
    break;
    
    deafult:
    printf("Invalid signal: ");
}
    
    return 0;
}

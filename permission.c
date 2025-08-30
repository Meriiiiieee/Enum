#include <stdio.h>

typedef enum {
    READ = 1,
    WRITE = 2,
    EXECUTE = 4,
} Permission;

int main() {
    int value;
    
    printf("Enter the value for permission 1-7: ");
    scanf("%d", &value);
    
    if((value & READ) == 1) {
        printf("Read\n");
    }
    if((value & WRITE) == 2) {
        printf("Write");
    }
    if((value & EXECUTE) == 4){
        printf("Execute");
    }
    
    if(value & (READ || WRITE || EXECUTE) == 0){
        printf("Nothing");
    }
    
    return 0;
}

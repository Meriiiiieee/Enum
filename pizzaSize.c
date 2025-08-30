#include <stdio.h>

typedef enum {
    SMALL,
    MEDIUM,
    LARGE,
    EXTRA_LARGE,
    SIZE,
} PizzaSize;

int main() {
    float price[SIZE]= {5, 10.5, 21, 41};
    
    char* sizeName[SIZE] = {"SMALL" , "MEDIUM", "LARGE", "EXTRA_LARGE"};
    
    printf("Pizza Sizes and prices:\n ");
    for(int i = 0; i<SIZE; ++i) {
        printf("%d %s %f\n", i, sizeName[i], price[i]);
    }
    
    int choice;
    
    printf("Enter the number 0-3: ");
    scanf("%d", &choice);
    
    if(choice>=0 && choice<=3){
        printf("pizza is %s. Price is %lf", sizeName[choice], price[choice]);
    } else{
        printf("Error: ");
    }
    
    return 0;
    
}

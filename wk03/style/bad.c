#include <stdio.h>

int main(void) {
    int myNumber = 10;

    if (myNumber > 10) {
        printf("my number is bigger than 10");
    } else {
        if (myNumber ==10){
            printf("my number is 10");
        }
        else {
        printf("my number is less than 10");
        }
    }

    int another_number= 5;
    while ( another_number > 1) {
        if (another_number % 2 == 0) {
            another_number += 1
        } else {
            another_number-=2;
        }
    }
    
    exit(0);
}

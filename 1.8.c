/* Read a real number and a positive integer as input, calculate and print the power as output  */

#include <stdio.h>

float exponentiation(float base,int exponent){
    float result = 1;
    for(int i=0;i<exponent;i++){
       result = result*base;
    }
    return result;
}

int main(){
    int exponent;
    float base;
    printf("Enter a real number: ");
    scanf("%f",&base);
    printf("How many multiples of %f you want to print? ",base);
    scanf("%d",&exponent);
    while(exponent<0){
        printf("Insert a positive integer number: ");
        scanf("%d",&exponent);
    }
    printf("%f raised to the power of %d is: ",base,exponent);
    printf("%f ",exponentiation(base,exponent));
    return 0;
}


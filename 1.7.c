/*  Read as input an integer n and a real number x then print the first n multiples of x  */
#include <stdio.h>

int main(){
    int n;
    float x;
    printf("Enter the real number x:");
    scanf("%f",&x);
    printf("How many multiples of %f you want to print?",x);
    scanf("%d",&n);
    printf("The first %d multiples of %f are:\n",n,x);
    for(int i=1;i<=n;i++){
        printf("%f ",i*x);
    }
    return 0;
}

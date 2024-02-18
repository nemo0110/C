/* Read two integers as input and print their sum as output. */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("La somma di %d e %d è %d \n",a,b,a+b);
    return(0);
}

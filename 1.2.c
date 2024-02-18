/* Read 3 rational numbers as input and print the largest as output. */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    float a,b,c,max;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b){
        if(a>c){
            max = a;
        }else{
            max = c;
        }
    }else{
        if(b>c){
            max = b;
        }else{
            max = c;
        }
    }
    printf("The maximum between %f, %f and %f is %f.\n",a,b,c,max);
    return(0);
}

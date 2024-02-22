/*  Read a set of n real numbers as input and print the maximum and minimum  */
#include <stdlib.h>
#include <stdio.h>


int main() {
    int n;
    float k,min,max;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    printf("Enter %d real numbers: ",n);
    min = k;
    max = k;
    for(int i=1; i<n; i++) {
         scanf("%f",&k);
         if(k<min){
             min= k;
         }else if(k>max){
             max=k;
         }
    }
    printf("The maximum number entered is %f/n",max);
    printf("The minimum number entered is %f",min);
    return 0;
}

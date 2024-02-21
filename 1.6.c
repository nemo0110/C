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
    printf("max is %f/n",max);
    printf("min is %f",min);
    return 0;
}

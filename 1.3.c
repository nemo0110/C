/* Read n real numbers as input and print the sum as output. */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    float s=0.0,x;
    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);
    printf("Enter %d real numbers: ",n);
    for(int i=0;i<n;i++){
        scanf("%f",&x);
        s = s+x;
    }
    printf("The sum of the %d real numbers is %f.\n",n,s);
    return(0);
}

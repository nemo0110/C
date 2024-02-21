
/*  read n numbers from input and print the mean  */

#include <stdlib.h>
#include <stdio.h>


int main() {
    int n;
    float h,k;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    printf("Insert %d numbers:\n",n);
    for(int i=0; i<n; i++) {
        scanf("%f",&h);
        k+=h;
    }
    printf("The mean is %f",k/n);
    return 0;
}

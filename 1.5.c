/*  Print the first odd numbers  */

#include <stdlib.h>
#include <stdio.h>


int main() {
    int n;
    printf("How many numbers do you want to print?\n");
    scanf("%d",&n);
    printf("The first %d odd numbers are:\n",n);
    for(int i=1; i<2*n; i+=2) {
        printf("%d ",i);
    }
    return 0;
}

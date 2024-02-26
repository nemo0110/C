/* Read an integer n>2 as input and print as output the first n elements of the Fibonacci sequence */

#include <stdio.h>

int main(){
    int n,x=0,y=0,z=1;
     printf("Enter a number greater than 2: ");
    scanf("%d",&n);
    while(n<=2){
        printf("\033[31;1m Enter a number greater than 2. \033[0m\n");
        scanf("%d",&n);
    }
    for(int i=0;i<n;i++){
        y = x;
        x = x+z;
        z = y;
        printf("%d ",x);
    }
    return 0;
}

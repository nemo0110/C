/* Given as input an odd integer n < 80, display as output an isosceles triangle of base n composed of asterisks */

#include <stdio.h>

int printTriangle(int triangleBase){
    if(triangleBase%2==0 || triangleBase > 80){
        return 1;
    }
    int halfTriangle = triangleBase/2+1;
    for(int j=0;j<halfTriangle;j++){
        int i = 0;
        while(i<(halfTriangle)-j){
            printf(" ");
            i++;
        }
        while(i>=(halfTriangle)-j && i<=(halfTriangle)+j){
            printf("*");
            i++;
        }
        while(i<(halfTriangle)+j){
            printf(" ");
            i++;
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int a = 0;
    printf("Enter an odd number < 80: ");
    scanf("%d",&a);
    while(printTriangle(a)==1){
         printf("The number is even or greater than 80.\n Enter an odd number < 80: ");
         scanf("%d",&a);
    }
    return 0;
}

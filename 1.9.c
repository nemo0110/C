/* Enter an integer > 1 and print the sequence 1,2,3...n,1,2,3... n-1,...,1,2,3,1,2,1 */

#include <stdio.h>

int main(){
    int n;
    printf("Enter an integer greater than 1: ");
    scanf("%d",&n);
    for(n;n>0;n--){
        for(int i=n;i>0;i--){
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}

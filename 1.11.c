/* Read two integer numbers a and b as input, store the maximum in the variable a and the minimum in b */

 #include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter 2 integers: ");
    scanf("%f %f",&a,&b);
    if(a<b){
        c = a;
        a = b;
        b = c;
    }
    printf("Max is %f, min is %f.",a,b);
    return 0;
}

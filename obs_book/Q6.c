//roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    float D, r1, r2;
    printf("Standard quad eq :  ax^2 + bx +c \n");
    printf("Enter a : ");
    scanf("%d", a);
    printf("Enter a : ");
    scanf("%d", b);
    printf("Enter a : ");
    scanf("%d", c);

    D=((b*b)-4*a*c);
    if(D<0){
        printf("Imaginary Roots !");
    }
    else if (D==0){
        r1=(-b+pow(D, 1/2))/(2*a);
        r2=r1;
        printf("Equal roots : %f and %f", r1, r2 );
    }
    else if(D>0){
        r1=(-b+pow(D, 1/2))/(2*a);
        r2=(-b-pow(D, 1/2))/(2*a);
        printf("Distinct roots : %f and %f", r1, r2 );
    }
}

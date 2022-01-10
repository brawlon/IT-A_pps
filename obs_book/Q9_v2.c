#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter n : ");
    scanf("%d", &a);
    int l=pow(a, 0.5);
    for(int i=2; i<=l; i++ ){
        if(a%i==0){
            printf("%d is not prime", a);
            break;
        }
        if(i==l){
            if(a%l==0){
                printf("%d is not prime", a);
            }
            else printf("%d is prime", a);
        }
    }
}
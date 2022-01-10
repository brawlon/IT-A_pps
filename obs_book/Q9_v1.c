#include<stdio.h>
int main(){
    printf("Enter n : ");
    int n;
    scanf("%d", &n);
    int count=0;
        for (int i=1; i<=n/2; i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==1){
            printf("%d is prime\n", n);
        }
        else {
            printf("%d is not prime\n", n);
        }
}
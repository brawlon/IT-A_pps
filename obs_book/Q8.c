//multiplication table
#include<stdio.h>
int main(){
    int n, n2;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Number of rows : ");
    scanf("%d", &n2);

    for (int i=1; i<=n2; i++){
        printf("%d X %d = %d \n", n, i, n*i);
    }
}
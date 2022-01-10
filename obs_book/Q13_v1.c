//print prime numbers between 1 and n
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i=2; i<n; i++){
        int count=0;
        for (int j=1; j<=i/2; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==1){
            printf("%d\n", i);
        }
    }
}
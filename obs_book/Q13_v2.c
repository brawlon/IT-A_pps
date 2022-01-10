#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter n : ");
    int n;
    scanf("%d", &n);
    int a;
    for (int i=2; i<=n; i++){
        a=i;
        if(a==2 || a==3){           //counter case of 2 and 3 seperately
            printf("%d\n", a);
        }
        int l=pow(a, 0.5);
        for(int j=2; j<=l; j++ ){
            
            if(a%j==0){
                break;
            }
            if(j==l){
                if(a%l==0){
                    break;
                }
                else printf("%d\n", a);
            }
        }
    }
}
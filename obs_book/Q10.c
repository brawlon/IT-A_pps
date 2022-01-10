//sum of individual digits and palindrome check
#include<stdio.h>
int main(){
    printf("Enter number : ");
    int n;
    scanf("%d", &n);
    int nc=n, sum=0, nr=0;  //nc is copy of n, nr is reverse of n

    while(nc>=1){
        int r=nc%10; //taking out last digit
        sum+=r;     //adding in sum
        nr = (nr*10) +r;  //storing in nr
        nc=nc/10;     // removing last digit from n
    }
    
    printf("Sum : %d\n", sum);
    printf("Reverse : %d\n", nr);

    if(n==nr){
        printf("%d is Palindrome!\n", n);
    } else{
        printf("%d is not Palindrome!\n", n);
    }
}
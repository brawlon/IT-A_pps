// greatest of three numbers
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter number 1 : ");
    scanf("%d", &n1); // input n1;
    printf("Enter number 2 : ");
    scanf("%d", &n2);
    printf("Enter number 3 : ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)     // comparison
    { 
        printf("%d is greatest !", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d is greatest !", n2);
    }
    else
    {
        printf("%d is greatest !", n3);
    }
}
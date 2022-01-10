//class awarded
#include<stdio.h>
int main(){
    printf("Enter percentage scored : ");
    float p;
    scanf("%f", &p);


    if (p<40){
        printf("Failed !");
    }
    else if (p>=40 && p<60){
        printf("Second class !");
    }
    else if (p>=60 && p<70){
        printf("First Class !");
    }
    else if (p>=70){
        printf("Distinction !");
    }
}
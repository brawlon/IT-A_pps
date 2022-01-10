//simple and compound interest calculator
#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter S for simple interest and C for compound interest : ");
    char in;
    scanf("%c", &in);


    double p,r, amt,i;           //decide data type accordingly
    int t;


    printf("Enter principal amount : ");
    scanf("%lf", &p);
    printf("Enter rate of interest in %% : ");
    scanf("%lf", &r);
    r=r/100;        //convert to decimal
    printf("Enter time period : ");
    scanf("%d", &t);


    if(in =='S' || in =='s'){
        amt=p*(1+(r*t));
        i=amt-p;
    }
    if(in =='C' || in =='c'){
        amt=p*pow((1+r), t);
        i=amt-p;
    }



    printf("Amount : %lf    Interest : %lf ", amt, i);


}
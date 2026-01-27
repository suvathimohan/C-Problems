#include<stdio.h>
int main(){
    int code;
    int exp;
    printf("Enter your code: 1 or 2\n");
    scanf("%d",&code);
    printf("Enter your exp:\n");
    scanf("%d",&exp);
    int bsdev=50000;
    int tester=35000;
    int bon=exp*5000;
    int total=bsdev+bon;
    int bon1=exp*5000;
    int total1=tester+bon1;
    switch (code)
    {
    case 1:
        if(exp>=3){
            printf("Salary %d",total);
        }
        else{
            printf("Salary %d",bsdev);
        }
        break;
    case 2:
        if(exp>=3){
            printf("Salary %d",total1);
        }
        else{
            printf("Salary %d",tester);
        }
    default:
        break;
    }
}
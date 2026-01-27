#include<stdio.h>
int main(){
    printf("Enter your attempts:1-3.\n");
    int a;
    scanf("%d",&a);
    int ma;
    printf("Enter your marks: 0-100.\n");
    scanf("%d",&ma);

    switch (a)
    {
    case 1:
        if(ma>=80){
            printf("Excellent");
        }
        else{
            printf("Not Qualified");
        }
        break;
    case 2:
        if(ma>=60){
            printf("Good");
        }
        else{
            printf("Not Qualified");
        }
        break;
    case 3:
            printf("Needs Improvement");
        break;
    default:
        break;
    }
}
#include<stdio.h>
int main(){
    int mark;
    printf("Enter your marks:");
    scanf("%d",&mark);
    
    int k = mark/10;
    switch (k)
    {
    case 3:
        if(mark>=35 && mark<=39){
            printf("Supplementary");
        }
        else{
            printf("Fail");
        }
        break;
    case 4:
        if(mark>=40 && mark<=49){
            printf("Grade E");
        }
        break;
    case 5:
        if(mark>=50 && mark<=59){
            printf("Grade D");
        }
        break;
    case 6:
        if(mark>=60 && mark<=69){
            printf("Grade C");
        }
        break;
    case 7:
        if(mark>=70 && mark<=74){
            printf("Grade C");
        }
        else{
            printf("Grade B");
        }
        break;
    case 8:
        if(mark>=80 && mark<=89){
            printf("Grade B");
        }
        break;
    case 9:
        if(mark>=90 && mark<=100){
            printf("Grade B");
        }
        break;
    default:
        break;
    }
    return 0;
}
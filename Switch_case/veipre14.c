#include<stdio.h>
int main(){
    int type;
    printf("Vehicle Category: 1 or 2.\n");
    scanf("%d",&type);
	int age;
    printf("Enter your vehicle age: 0-20\n");
    scanf("%d",&age);

    switch (type)
    {
    case 1:
        if(age<=5){
            printf("1500");
        }
        else{
            printf("2500");
        }
        break;
    case 2:
        if(age<=5){
            printf("4000");
        }
        else{
            printf("6000");
        }
        break;
    default:
        break;
    }
}
#include<stdio.h>
int main(){
    int class;
    printf("Enter Your Class\n:");
    printf("1.Sleeper\n");
    printf("2.AC\n");
    scanf("%d",&class);
    int age;
    printf("Enter Your Age:\n");
    scanf("%d",&age);
    int basefare=300;
    int basefarec2=1000;
    int fare;
    switch (class)
    {
    case 1:
        if(age>=60){
            fare = basefare-(basefare*33/100);
            printf("%d",fare-1);
        }
        else if(age<=12){
            fare = basefare/2;
            printf("%d",fare);
        }
        else{
            printf("%d",basefare);
        }
        break;
    case 2:
            printf("%d",basefarec2);
        break;
    default:
        break;
    }
}
#include<stdio.h>
int main(){
    int fc;
    int w;
    printf("Choose your Flight class: 1 or 2.\n");
    scanf("%d",&fc);
    printf("Entered your weight:");
    scanf("%d",&w);

    switch (fc)
    {
    case 1:
        printf("%d",w*300);
        break;
    case 2:
        if(w>=7){
            int rem = w-3;
            printf("%d",rem*300);
        }
        else{
            printf("No charge");
        }
        break;
    default:
        break;
    }
}
#include<stdio.h>
int main(){
    int unit;
    printf("Enter your unit:");
    scanf("%d",&unit);
    if(unit>=1 && unit<=120){
        int slab=unit*5;
        printf("Total bill is: %d",slab);
    }
    else if(unit>=121 && 220<=unit){
        int slab1=unit*6;
        printf("Total bill is: %d",slab1);
    }
    else{
        int slab2=unit*7;
        printf("Total bill is: %d",slab2);
    }
}
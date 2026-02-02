#include<stdio.h>
int main(){
    int order;
    printf("Enter Your Orders:");
    scanf("%d",&order);
    int i=1;
    int o;
    int s=0;
    int c=0;
    while(i<=order){
        printf("Enter order S or C Status:");
        scanf("%d",&o);
        if(o==1){
            s++;
        }
        else{
            c++;
        }
        i++;
    }
    printf("Successful:%d\n",s);
    printf("Cancelled:%d\n",c);
    if(c>s){
        printf("Status:Risk");
    }
    else{
        printf("Status:Safe");
    }
}
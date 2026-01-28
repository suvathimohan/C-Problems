#include<stdio.h>
int main(){
    int n=123;
    int count=0;
    for(int i=n;i>0;){
        int digi=n%10;
        count++;
        n=n/10;
    }
     printf("%d",count);
     return 0;
}

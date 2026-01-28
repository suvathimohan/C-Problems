#include<stdio.h>
int main(){
    int n = 2;
    int powr = 3;
    int res = 1;
    for(int i=1;i<=powr;i++){
        res*=n;
    }
    printf("%d",res);
}
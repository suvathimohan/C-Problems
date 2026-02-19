#include<stdio.h>
int main(){
    int r=2;int c=4;
    int d[r][c];
    int i=0;
    while(i<r){
        int j=0;
        while(j<c){
            scanf("%d",&d[i][j]);
            j++;
        }
        i++;
    }
    int i1=0;
    int count=0;
    while(i1<r){
        int j1=0;
        int oddc=0;
        int evec=0;
        while(j1<c){
            if(d[i1][j1]%2!=0){
                oddc++;
            }
            if(d[i1][j1]%2==0){
                evec++;
            }
            j1++;
        }
        i1++;
        if(oddc==evec){
            count++;
        }
    }
    printf("%d",count);
}
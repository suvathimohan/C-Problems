#include<stdio.h>
int main(){
    int r=3;int c=3;
    int i=0;
    int d[r][c];
    while(i<r){
        int j=0;
        while(j<c){
            scanf("%d",&d[i][j]);
            j++;
        }
        i++;
    }
    int i1=0;
    int max=d[0][0];
    int smax=d[0][0];
    while(i1<r){
        int j1=0;
        while(j1<c){
            if(d[i1][j1]>max){
                max=d[i1][j1];
            }
            if(d[i1][j1]<max){
               if(d[i1][j1]>smax){
                   smax=d[i1][j1];
                }
            }
            j1++;
        }
        i1++;
    }
    printf("Second mas is:%d",smax);
}
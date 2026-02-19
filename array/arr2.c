#include<stdio.h>
int main(){
    int r=2;int c=3;
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
    int max=0;
    int pro=d[r-1][0];
    while(i1<r){
        int j1=0;
        while(j1<c){
            int res=d[i1][j1]*pro;
            pro++;
            j1++;
            if(res>max){
                max=res;
            }
        }
        i1++;
    }
    printf("%d",max);
}
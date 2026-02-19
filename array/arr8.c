#include<stdio.h>
int main(){
    int r=3;int c=3;
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
    int max=0;
    while(i1<r-1){
        int j1=0;
        while(j1<c-1){
            int sum=d[i1][j1]
                   + d[j1][j1+1]
                   + d[i1+1][j1]
                   + d[i1+1][j1+1];
            j1++;
            
            if(sum>max){
                max=sum;
            }
        }
        i1++;
    }
    printf("%d",max);
}
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
    int count=0;
    while(i1<r){
        int j1=0;
        int f=1;
        while(j1<c){
            if(d[i1][j1]>d[i1][j1+1]){
                f=0;
            }
            if(f==1){
                count++;
            }
            j1++;
        }
        i1++;
    }
    printf("%d",count);
}
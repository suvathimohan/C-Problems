#include<stdio.h>
int main(){
    int r=2;int c=3;
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
    int max;
    int index=-1;
    while(i1<r){
        int j1=0;
        int res=1;
        while(j1<c){
            res*=d[i1][j1];
            j1++;
        }
        if(i1==0){
            max=res;
            index=i1;
        }
        else if(res>max){
            max=res;
            index=i1;
        }
        i1++;
    }
    printf("%d",index);
}
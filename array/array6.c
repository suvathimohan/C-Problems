#include<stdio.h>
int main(){
    int r=3;int c=2;
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
    int sum[r];
    while(i1<r){
        int j1=0;
        sum[i1]=0;
        while(j1<c){
            sum[i1]+=d[i1][j1];
            j1++;
        }
        i1++;
    }
    int maxdiff=0;
    int m=0;
    int res;
    while(m<r){
        int n=m+1;
        while(n<r){
            res=sum[m]-sum[n];
        if(res<0){
            res=-res;
        }
        if(res>maxdiff){
            maxdiff=res;
        }
            n++;
        }
        m++;
    }
    printf("%d",maxdiff);
}
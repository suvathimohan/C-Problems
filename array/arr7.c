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
    int min[r];
    while(i1<r){
        int minv=d[i1][0];
        int j1=0;
        while(j1<c){
            if(d[i1][j1]<minv){
                minv=d[i1][j1];
            }
            min[i1]=minv;
            j1++;
        }
        i1++;
    }
    int s=0;
    int maxv;
    int cou=0;
    while(s<r){
        int u=0;
        while(u<c){
            maxv=d[0][u];
            int k=0;
            while(k<r){
                if(d[k][u]>maxv){
                    maxv=d[k][u];
                }
                k++;
            }
            if(d[s][u]==min[s] && d[s][u]==maxv){
                cou++;
            }
            u++;
        }
        s++;
    }
    printf("%d",cou);
}
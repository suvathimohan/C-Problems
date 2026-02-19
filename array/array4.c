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
    while(i1<r){
        int j1=0;
        while(j1<c){
            int c1=0;
            int def=d[i1][j1];
            for(int x=0;x<r;x++){
                for(int y=0;y<c;y++){
                    if(def==d[x][y]){
                        c1++;
                    }
                    if(c1>1){
                        printf("%d",def);
                        return 0;
                    }
                }
            }
            j1++;
        }
        i1++;
    }
    return 0;
}
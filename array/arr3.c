#include<stdio.h>
int main(){
    int r = 3, c = 4;
    int d[r][c];
    int i = 0;
    while(i < r){
        int j = 0;
        while(j < c){
            scanf("%d", &d[i][j]);
            j++;
        }
        i++;
    }
    int i1 = 0;
    int maxuni = 0;
    int index = 0;
    while(i1 < r){
        int j1 = 0;
        int uniqueCount = 0;
        while(j1 < c){
            int k = 0;
            int f = 0;  

            while(k < c){
                if(j1 != k && d[i1][j1] == d[i1][k]){
                    f = 1;   
                    break;
                }
                k++;
            }
            if(f == 0){
                uniqueCount++;
            }
            j1++;
        }
        if(uniqueCount > maxuni){
            maxuni = uniqueCount;
            index = i1;
        }
        i1++;
    }
    printf("%d", index);
}
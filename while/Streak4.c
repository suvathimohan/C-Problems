#include<stdio.h>
int main(){
    int i = 1;
    int wd;
    printf("Enter Your Days:");
    scanf("%d",&wd);

    int wf;
    int streak = 0;
    int count = 0;

    while(i <= wd){
        printf("Enter your working or failure detail:");
        scanf("%d",&wf);

        if(wf == 0){
            streak++;              
            if(streak > count){
                count = streak;    
            }
        }
        else if(wf == 1){
            streak = 0;        
        }
        i++;
    }
    printf("Long failure Streak:%d", count);
    return 0;
}

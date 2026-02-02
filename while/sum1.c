#include<stdio.h>
int main(){
    int n;
    printf("Enter your I/P range: ");
    scanf("%d",&n);

    int noise;
    int vio = 0;
    int i = 1;
    int streak = 0;
    int max_streak = 0;

    while(i <= n){
        printf("Enter a value: ");
        scanf("%d",&noise);

        if(noise > 70){
            vio++;
            streak++;          
        }
        else{
            streak=0;
        }
        if(streak>max_streak){
            max_streak=streak;
        }
        i++;
    }
    printf("Noise Violations: %d\n", vio);
    printf("Longest Violation Streak: %d", max_streak);
}

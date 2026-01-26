#include<stdio.h>
int main(){
    char c;
    printf("Enter your letter:");
    scanf("%c",&c);
    if(c==('a'||'e'||'i'||'o'||'u')){
        printf("%c is Vowel!",c);
    }
    else if(c==('A'||'E'||'I'||'O'||'U')){
        printf("%c is Vowel!",c);
    }
    else{
        printf("%c is not vowel it is a Cosonant",c);
    }
}
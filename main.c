#include <stdio.h>
#include <stdlib.h>

void check_anagram (char w1[20],char w2[20]);

int main()
{
    int exit=0;
    while(exit != 1){
        puts("You should enter 2 words");
        char w1[20];
        char w2[20];
        printf("Please enter first word:");
        scanf("%s",w1);
        printf("Please enter second word:");
        scanf("%s",w2);
        check_anagram(w1,w2);
        puts("Do You want to exit?");
        puts("if yes press '1' if no press '0'");
        scanf("%d",&exit);
    }
    return 0;
}
void check_anagram (char w1[20],char w2[20]){
    int len1 = strlen(w1);
    int len2 = strlen(w2);
    if (len1 != len2){
        puts("Your words is not anagram");
        return;
    }
    char temp;
    temp = w1[0];
    int count1=0;
    int count2=0;
    int m=0; // m --> movement
    while(m != len1){
        for(int i=m;i<len1;i++){
            if(temp == w1[i]){
                w1[i]='*';
                count1++;
            }
        }
        for(int j=0;j<len2;j++){
            if(temp == w2[j]){
                w2[j]='*';
                count2++;
            }
        }
        if(count1 != count2){
            puts("Your words is not anagram");
            return;
        }
        while(w1[m] == '*'){
            m++;
        }
        temp = w1[m];
    }
    puts("Your words is anagram :)");
    return;

}

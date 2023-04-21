#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char s[1000],x;
int count[10]={0};
char nums[10]={'0','1','2','3','4','5','6','7','8','9'};

scanf("%s",s);
 
    for (int i=0; i<10; i++) 
    {
        for (int j=0; s[j]!='\0';j++ ) 
        {
            if (s[j]==nums[i]) 
            {
                ++count[i];
            }
        }
    
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",count[i]);
    }
    
        
        
    return 0;
}

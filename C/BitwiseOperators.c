#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int maks(int dizi[],int x)
{
    int max=dizi[0];
    for (size_t i = 0; i < x-1; i++)
    {
        if (dizi[i]<dizi[i+1])
        {
            dizi[i+1]=max;
        }
        
    }
    return max;

}


void calculate_the_maximum(int n, int k) {      //n'e akdar toplam
   int x=0;
    for (size_t i = 1; i < n; i++)
    {
        x+=i;
    }
    int and[x];
    int or[x];
    int xor[x];
    int a=0;
    
    for (int i=1; i<=k; i++) 
        {
            for (int j= 2; j<=n; j++) 
            {
                if (i<j) 
                    {
                        and[a]=i&j;
                        or[a]=i|j;
                        xor[a]=i^j;
                        a++;
                    }
            }
        }
        printf("%d\n",maks(and,x));
        printf("%d\n",maks(or,x));
        printf("%d",maks(xor,x));
    }


      
int main() {                        
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

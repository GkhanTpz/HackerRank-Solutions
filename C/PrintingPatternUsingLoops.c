#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

int n;

scanf("%d",&n);
int size=2*n-1;
int start=0;
int end=size-1;

int dizi[size][size];

while (n!=0)
{
    for (int i = start; i <=end ; i++)
    {
        for (int j = start; j <=end ; j++)
        {
            if (i==start || i==end || j==start || j==end)
            {
                dizi[i][j]=n;
            }
            
        }
        
    }
    ++start;
    --n;
    --end;
}

for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        printf("%d ",dizi[i][j]);
    }
    puts("");
}
   
          
      
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum=0;
    int n;
    scanf("%d",&n);
    
    int *dizi=malloc(n*sizeof(int));
    
    for (int i=0; i<n; i++) 
        {
            scanf("%d",&dizi[i]);
            sum+=*(dizi+i);
        }
    printf("%d",sum);
       
    return 0;
}

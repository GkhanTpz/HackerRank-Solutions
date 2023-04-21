#include <stdio.h>

int max(int a,int b,int c,int d)
{
   
  if (a>b && a>c && a>d) {
  return a;
  }
  if (b>a && b>c && b>d) {
  return b;
  } 
  if (c>a && c>b && c>d) {
  return c;
  }  
  return d;  

}


int main() {
 
 int x,y,z,t;  
 
scanf("%d%d%d%d",&x,&y,&z,&t);

printf("%d",max(x,y,z,t));

   
   
   
   
    return 0;
}
#include <stdio.h>
#include <stdlib.h>


int sumTwo(int a, int b)
{
    int c = a+b;
    return c; 
}

int square(int n) 
{
    return n*n;
}

int get_max(int x, int y)
{
    if (x > y)
    {
          return x;
          }
       
    else 
    {
         return y;
         }

}

int main(void) {
    int a, b;
    a = 3;
    b = 10;
    
    printf("sumTwo result : %i \n",sumTwo(a,b));
    printf("square result : %i \n",square(a));
    printf("get_max result : %i \n",get_max(a,b));
    square(5);
    get_max(23,10);
    


  system("PAUSE");	
  return 0;
  }

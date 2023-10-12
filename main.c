#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    int i;
    int res = 1 ;
    
    for(i = 1 ; i <= n ; i++) 
    {
          res = res*i;
    }
    return res;
         
}




int combination(int n, int r){
    int div1, div2; //div1==분자, div2 == 분 모  
    div1 = factorial(n);//n!
    div2 = factorial(n-r) * factorial(r); 
    
    return (div1/div2);
}

int main()
{
//1. 입력값 받음
int n, r, result;

//메시지 출력,N 입력
printf("input a : ");
scanf("%d", &n); 
//메시지 출력, r 입력 
printf("input r : ");
scanf("%d", &r); 


//2. 분모 분자 계산
//COMBINATION 함수  

//3. 최종값 출력  
//분모,분자 나눔
result = combination(n,r);

//결과값 출력 
printf("result is %i \n", result); 

    system("PAUSE");
    return 0;
}

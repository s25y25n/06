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
    int div1, div2; //div1==����, div2 == �� ��  
    div1 = factorial(n);//n!
    div2 = factorial(n-r) * factorial(r); 
    
    return (div1/div2);
}

int main()
{
//1. �Է°� ����
int n, r, result;

//�޽��� ���,N �Է�
printf("input a : ");
scanf("%d", &n); 
//�޽��� ���, r �Է� 
printf("input r : ");
scanf("%d", &r); 


//2. �и� ���� ���
//COMBINATION �Լ�  

//3. ������ ���  
//�и�,���� ����
result = combination(n,r);

//����� ��� 
printf("result is %i \n", result); 

    system("PAUSE");
    return 0;
}

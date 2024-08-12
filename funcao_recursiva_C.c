#include<stdio.h>
int f(int *a, int n)
{
  if(n <= 0) return 0;
  else if(*a % 2 == 0) return *a + f(a+1, n-1);
  else return *a - f(a+1, n-1);
}
  
int main()
{
  int a[] = {12, 7, 13, 4, 11, 6};
  printf("%d", f(a, 2));
  getchar();
  return 0;
}

/*
  A função f realiza operações recursivas com os elementos do array a:

    - A chamada da função f(a,2) tem o array a e o valor 2 como argumentos;
    
    - O primeiro elemento é o 12 (um número par), então retorna 12 + f(a+1, 1);

    - O segundo elemento é 7 (um número ímpar), então retorna 12 + (7 - f(a+2, 0));

    - A chamada f(a+2, 0) retorna 0 (conforme a condição de base if(n <= 0));

    Portanto, a expressão final será 12 + (7 - 0) = 19.
*/
#include <stdio.h>
#include <stdio.h>
int main()
{
int i, j, N;
int k = 1;
printf("Valor de N: ");
scanf("%d", &N);
printf("\n SAIDA: \n");
for(i=1; i<=N; i++)
{
for(j=i; j<=N; j++)
{ printf("%d ", j);
}
k = j - 2;
for(j=1; j<i; j++, k--)
{
printf("%d ", k);
}
printf("\n");
}
system("pause");
return 0;
}
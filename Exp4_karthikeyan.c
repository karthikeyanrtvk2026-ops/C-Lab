#include<stdio.h>
int main()
{
  int n, i, sum, res;
  printf("enter the number: ");
  scanf("%d",&n);
  printf("\nnumber from 1 to %d:\n",n");
  for(i=i;i<=n;i++)
  {  
    printf("%d",i);
  }  
  sum=0;
  i=1;
  while(i<=n)
  {
    sum=sum+i;
    i++;
  }
  res=1;
  i=1;
  do
  {
    res=res*i;
    i++;
  }
    while(i<=n);
    printf("\n\nsum of number =%d",sum);
    printf("\nfactorial of =%d",n,res);
    return 0;
}
    

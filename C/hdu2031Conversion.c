#include<stdio.h>
int main()
{
  int n,r;
  int i,j;
  int a[1005];
  while(scanf("%d%d",&n,&r)!=EOF){
    i=0;
    if(n<0){
      n=-n;
      printf("-");
    }
    while(n>0){
      a[i]=n%r;
      n=n/r;
      i++;
    }
    for(j=i-1;j>=0;j--){
      if(a[j]>=10){
        a[j]=a[j]-10+'A';
        printf("%c",a[j]);
      }else
        printf("%d",a[j]);
    }
    printf("\n");
    
  }

  return 0;
}
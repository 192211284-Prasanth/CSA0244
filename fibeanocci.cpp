#include <stdio.h.>
main(void)
{  
   int n,f1,f2,fib,i;
   scanf("%d",&n);
   i=1,f1=0,f2=1;
   do
   {
   	   fib=f1+f2;
   	   f1=f2;
   	   f2=fib;
   	   i=i+1;
   	   
   }while(i<=n);
   printf("%d \t",fib);
}

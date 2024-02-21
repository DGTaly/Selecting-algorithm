#include <stdio.h>
#include <cmath>
using namespace std;

int a,i,j;
long long t;
unsigned long long c,n,k;
long double b,d,e;
unsigned long long sekta(unsigned long long n, unsigned long long k)
{     
    if (k==n)
    {
    c=log2(k);
    c=pow(2,c);
    c=(n-c);
    c=2*c+1;
    printf("%lli\n", c);
    }
    else{
    j=1;   
    do
    {
       c=pow(2, j);
       c=k*c-n*(c-2)-c/2 +1;
          
       if(c<=0)
       {
       j=j-1;
       }
      if(c>n)
      {
      j=j+1;
      }
       if((c>0) && (c<=n))
       {
       printf("%lli\n", c);
       break;
       }
    }
    while(j>0&&j<=63);
    }      
return 0;
}
int main()
{
    printf("Enter the number of setected rows:\n");
    scanf("%d", &a);
    for(i=0;i<a;i++){
    printf("Enter lenght of the row, and number of elimination order: \n");
    scanf("%lld", &n);
    scanf("%lld", &t);
    if(t<0)
       {
         k = n + t +1;
        }
    else {k=t;}
    sekta(n,k);    
    }
    printf("Eliminated number:\n");
    return 0;
}
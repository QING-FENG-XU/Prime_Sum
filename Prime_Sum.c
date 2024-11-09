#include <stdio.h>
 int main ()
{
int a,b,count=0,cnt=0,sum=0;
scanf("%d %d",&a,&b);
int i=a ;
for(i; i<=b; i++){//go through a to b
    cnt=0;// renew cnt
    for(int check=2; check<=i; check++){
        if(i%check==0 && i!=check) {
            cnt=0;
            break;
        }
        else cnt++;
    }//this loop to check prime number
    if(cnt) {
        sum=sum+i;
        count++;
    printf("%d ",i);
    }
 }
 printf("%d,%d",count,sum);
 return 0;
}

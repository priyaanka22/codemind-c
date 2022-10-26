#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int l=0,r=1,s=l+r;
    while(s<=n){
        l=r;
        r=s;
        s=l+r;
    }
    if(abs(n-r)>abs(n-s))printf("%d",s);
    else if(abs(n-r)==abs(n-s))printf("%d %d",r,s);
    else printf("%d",r);
}
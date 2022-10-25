#include<stdio.h>
int fac(int n){
    int s=1,c=1;
    while(c<=n){
        s*=c;
        c+=1;
    }
    return s;
}
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int t=n;
    while(t!=0){
        s+=fac(t%10);
        t/=10;
    }
    if(s==n)printf("The number %d is a strong number",n);
    else printf("The number %d is not a strong number",n);
    
    return 0;
}
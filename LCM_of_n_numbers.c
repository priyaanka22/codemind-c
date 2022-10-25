#include<stdio.h>
#include<math.h>
int lcm(int m,int n){
    if (m%n==0)return m;
    if (n%m==0)return n;
    int c;
    if(m>n)c=m;
    else c=n;
    while(1){
        if (c%m==0 && c%n==0)return c;
        c+=1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t=lcm(a[0],a[1]);
    for(int i=1;i<n;i++){
        t=lcm(t,a[i]);
    }
    printf("%d",t);
}
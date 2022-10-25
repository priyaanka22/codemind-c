#include<stdio.h>
#include<math.h>
bool divi(int m){
    int cnt=2;
    for(int i=2;i<=m/2;i++){
        if(m%i==0)cnt+=1;
    }
    if(cnt==9)return true;
    else return false;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(divi(i)){
            printf("%d ",i);
            c+=1;
        }
    }
    printf("
Total=%d",c);
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int c=0,i=-1,j=-1;
    while(c<n-1){
        if(a[c]==k){
            i=c;
            while(a[c]==k){
                c++;
            }
            j=c-1;
            break;
        }
        c++;
    }
    printf("%d %d",i,j);
    return 0;
}
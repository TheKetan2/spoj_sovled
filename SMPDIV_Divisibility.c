#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,x,y,i;
    scanf("%d",&t);
    while(t--){
        printf("\n");
        scanf("%d %d %d",&n,&x,&y);
        for(i=x;i<n;i+=x){
            if(i%y!=0)
                printf("%d ",i);

        }
    }
    return 0;
}

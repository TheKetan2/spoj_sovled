
#include <stdio.h>



int main()
{
    char ch[100];
    int i,len=0,k,b;
    scanf("%d",&b);
    for(int a=0;a<=b;a++){
        gets(ch);
        i=0;

    while(ch[i]!=NULL)
    {
        //printf("%c",ch[i]);
        i++;
    }
    len = i/2;

    for(k=0;k<len;k+=2){
        printf("%c",ch[k]);

}
    printf("\n");
    }


    return 0;
}

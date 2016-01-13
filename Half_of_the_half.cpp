
#include <stdio.h>



int main()
{
    char ch[123456]; //initially I took size of array 100 and it gave me segmentation fault so i increased the array size and it worked
    int i,len=0,k,b;
    scanf("%d",&b); //number of string to be inputed
    for(int a=0;a<=b;a++){
        gets(ch);
        i=0;

    //finding lenght of string ,you can use string function too
    while(ch[i]!=NULL)
    {
        i++;
    }
    len = i/2; //for finding half lenght of string

    for(k=0;k<len;k+=2){
        printf("%c",ch[k]);

}
    printf("\n");
    }


    return 0;
}

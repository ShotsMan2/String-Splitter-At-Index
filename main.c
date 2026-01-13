#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[99],str1[99],str2[99];
    int len=0,i=0,n,j;

    printf("str girin ");
    scanf("%s",&str);

    printf("\n n i girin ");
    scanf("%d",&n);

    while(str[i]!='\0'){
        len++;
        i++;
    }

    for(i=0;i<n;i++){
        str1[i]=str[i];
    }
    str1[n]='\0';

    j=0;

    for(i=n;i<len;i++){
        str2[j]=str[i];
        j++;
    }

    str2[j+1]='\0';



    printf("str1= %s \n",str1);



    printf("str2= %s \n",str2);
}

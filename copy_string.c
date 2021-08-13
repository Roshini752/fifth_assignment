#include<stdio.h>
#include<string.h>
int main()
{
    char str[12]="thundersoft";
    char str2[12];
    char *ptr=str;
    int i;
    for(i=0;i<=12;i++)
    {
        str2[i]=ptr[i];
    }
    printf("%s\n",str2);
    char *ptr2=str2;
    int count=0;
    while(*ptr2 != '\0')
    {
        count++;
        ptr2++;
    }
    printf("length of the string %d\n",count);
    int l=strlen(str2);
    printf("%d\n",l);
}


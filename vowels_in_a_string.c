#include<stdio.h>
int main()
{
    char ch[10000];
    scanf("%[^
]s",ch);
    char se[3];
    scanf("%s",&se);
    int i,c=0,ind=0;
    for(i=0;ch[i]!=NULL;i++)
    {
        if(ch[i]==se[0])
        {
            c=1;
            ind=i;
            break;
        }
    }
    if(c==1)
    {
    printf("True
");
    printf("%d",ind);
    }
    else
    {
        printf("False");
    }
}
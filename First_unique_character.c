#include<stdio.h>
int main()
{
    char st[1000];
    scanf("%[^
]s",st);
    int i,j,co=0,c=0;
    char m;
    for(i=0;st[i]!=NULL;i++)
    {
        co=0;
        for(j=0;st[j]!=NULL;j++)
        {
            if(i!=j)
            {
                if(st[i]==st[j])
                {
                    co=co+1;
                }
            }
        }
        if(co==0)
        {
            m=st[i];
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%c",m);
    }
}
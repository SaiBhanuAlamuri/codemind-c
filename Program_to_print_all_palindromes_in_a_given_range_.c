#include <stdio.h>

int main()
{
    
    int a;
    int b;
    int i;
    int c;
    int rev;
    int rem;
    scanf("%d", &a);
    scanf("%d", &b);
   for (i=a;i<=b;i++)
    {
        c=i;
        rev=0;
        while (c)
        {
            rem=c%10;
            c=c/10;
            rev=rev*10+rem;
        }

        if(i==rev){
            printf("%d ", i);
        }
    }
    return 0;
}
    #include <stdio.h>
    int main()
    {
        int tc,n;
        scanf("%d",&tc);
        while(tc--)
        {
            int rev=0,rem=0 ;
            scanf("%d\n",&n);
            while(n>0)
            {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
            }
            printf("%d\n",rev);
        }
        return 0;
    } 

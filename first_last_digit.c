    #include<stdio.h>
    int main()
    {
        int tc,n,s;
        scanf("%d",&tc);
        while(tc--)
        {
            scanf("%d",&n);
            s=n%10;
            while(n>=10)
            {
                n=n/10;
            }
            printf("%d\n",s+n);
        }
        return 0;
    } 

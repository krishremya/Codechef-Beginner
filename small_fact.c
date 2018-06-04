    #include<stdio.h>
    int main()
    {
    int tc;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
    int j,n,fact=1;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {fact=fact*j;
    }
    printf("%d",fact);
    printf("\n");
    }
    return 0;
    }
     

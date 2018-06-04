    #include<stdio.h>
    int main()
    {
    int tc;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
    int n,r,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
    r=n%10;
    sum=sum+r;
    n=n/10;
    }
    printf("%d\n",sum);
    }
    return 0;
    } 

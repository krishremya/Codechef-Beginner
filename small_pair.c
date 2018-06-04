    #include <stdio.h>
    int main()
    {
    int tc,n,i,t;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {   if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                    
                }
                
                
            }
        }
        printf("%d\n",a[0]+a[1]);
    }
     return 0;
    } 

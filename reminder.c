    #include <stdio.h>
    int main()
    {  
        int tc,rem=0;
        long int a,b;
        scanf("%d",&tc);
        for(int i=0;i<tc;i++)
        {
            scanf("%ld%ld",&a,&b);
            rem=a%b;
            printf("%d\n",rem);        
        }
        return 0;
    } 

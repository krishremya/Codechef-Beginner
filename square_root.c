    #include <stdio.h>
    #include<math.h>
    int main()
    {  
        int tc,i;
        scanf("%d",&tc);
        long int n,s=0;
        for(i=0;i<tc;i++)
        {
            scanf("%ld",&n);
            s=sqrt(n);
            printf("%ld\n",s);
        }
       
        return 0;
    } 

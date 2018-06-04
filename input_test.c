    #include <stdio.h>
    int main()
    {
        long int n,k;
        
        int cnt=0;
        scanf("%ld %ld",&n,&k);
        int A[n];
           for(int i=0;i<n;i++)
           {
           scanf("%d",&A[i]);
           if(A[i]%k==0)
           cnt++;
           }
           
        
        printf("%d \n",cnt);
        return 0;
        
    } 

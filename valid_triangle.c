    #include<stdio.h>
    int main()
    {
        int tc,A,B,C,total=0;
        scanf("%d",&tc);
        for(int i=0;i<tc;i++)
        {
           scanf("%d%d%d",&A,&B,&C);
           if(A>0&&B>0&&C>0)
           {
                total=A+B+C;
                if(total==180)
                printf("YES\n");
                else
                {
                    printf("NO\n");
               
                }
            
            }
            else
            {
                printf("NO\n");
            }
        }    
        return 0;
    } 

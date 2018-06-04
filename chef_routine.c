    #include <stdio.h>
    #include<string.h>
    int main()
    {
        int tc,l,cntr;
        char str[100000];
        scanf("%d",&tc);
        while(tc--)
        {
            cntr=1;
            scanf("%s",str);
            l=strlen(str)-1;
            for(int i=0;i<l;i++)
            {   if(str[i]>str[i+1])
               { cntr=0;
                break;
               }
            }
            if(cntr==0)
            printf("no\n");
            if(cntr==1)
            printf("yes\n");
            
        }
        return 0;
    } 

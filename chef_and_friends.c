#include <stdio.h>
#include<string.h>
int main()
{
    int static count=0;
    int tc,len=0;
    char str[50];
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        scanf("%s",str);
        len=strlen(str);
        for(int i=0;i<len-1;i++)
        {
            if(str[i]=='c'&&str[i+1]=='h')
            {
                count++;
                break;
            }
            else if(str[i]=='h'&&str[i+1]=='e')
            {
                count++;
                break;
            }
            else if(str[i]=='e'&&str[i+1]=='f')
            {
                count++;
                break;
            }
        }
        
    }
    printf("%d",count);   
    return 0;
    
}

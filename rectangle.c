    #include<stdio.h>
    int main()
    {
      int tc,P,Q,R,S;
      scanf("%d",&tc);
      for(int i=0;i<tc;i++)
      {
        scanf("%d%d%d%d",&P,&Q,&R,&S);  
        if((P==Q)&&(R==S))
        printf("YES\n");
        else if((R==Q)&&(P==S))
        printf("YES\n");
        else if((P==R)&&(Q==S))
        printf("YES\n");
        else 
        printf("NO\n");
      }
      return 0;
    } 

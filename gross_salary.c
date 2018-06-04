#include <stdio.h>
int main()
{
    int tc,salary;
    float total=0;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        scanf("%d",&salary);
        if(salary<1500)
        total=(.1*salary)+(.9*salary)+salary;
        else 
        total=500+(.98*salary)+salary;
        printf("%f\n",total);
    }
    return 0;
}

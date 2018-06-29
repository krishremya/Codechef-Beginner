/*The main of the problem is to find the number of wolverine-like minions that are transformed i.e here the user is prompted to enter 2 integers n and k. The user has to create an array with the n elements and had to add k with each elements and find if its divisible by 7 and if its so then the count is added by one.*/

#include <iostream>
using namespace std;
int main() 
{
    //Declaring the number of minions, the number to be added and the number of testcases
    int n,k,t;
    cin>>t;
    while(t>0)
    {
        int cnt=0;
        
        //Accepting n and k
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        for(int i=0;i<n;i++)
            
        //Checking if condition is satisfied after adding the k values to the array elements
        {
            A[i]=A[i]+k;       
            if(A[i]%7==0)
            cnt++;
        }
        
        //Printing the count value
        cout<<cnt<<"\n";
        t--;
    }
    return 0;
} 

 
/*The aim of the program is to find if the soldiers are ready for battle. User is asked to give the number of soldiers and have to create array of the number of weapons that each soldier has. Asoldier is lucky if he has even number of weapons. If the lucky soldiers are more than unlucky soldiers then they are ready for battle.*/
 
#include <iostream>
using namespace std;
int main() 
{
    int n;
    int lucky,unlucky;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        lucky=0,unlucky=0;
        cin>>A[i];
        if(A[i]%2==0)
        lucky++;
        else 
        unlucky++;
    }
    
    //Printing if the soldiers are ready for battle 
    if(lucky>unlucky)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
    return 0;
    } 

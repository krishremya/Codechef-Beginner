//Finding second largest number. 

#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc; 
    long long A[3];
    cin>>tc;
    for(int i =0 ;i < tc; i++) {
        for(int j = 0; j < 3; j++)
        cin>>A[j];
        sort(A,A+3);
        cout<<A[1]<<"\n";
    }
    return 0;
}
    


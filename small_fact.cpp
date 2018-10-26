//Find the factorial
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc; 
    int n;
    cin>>tc;
    while(tc--) {
        cin>>n;
        int fact = 1;
        for(int i =1 ;i <= n ; i++) {
            fact *= i;
        }
        cout<<fact<< "\n";
    }
    return 0;
}

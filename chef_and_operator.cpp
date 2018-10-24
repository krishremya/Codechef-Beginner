//Simple program to compare two numbers.
#include <iostream>
using namespace std;
int main() {
    int tc;
    int a, b;
    cin>>tc;
    for(int i = 0 ;i < tc ; i++) {
        cin >> a >> b;
        if(a > b) {
            cout<< ">";
        } else if(a < b) {
            cout<< "<";
        } else
            cout<<"=";
        cout<<"\n";
    }
    return 0;
}

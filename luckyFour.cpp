#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int num;
    int count;
    cin>>n;
    for(int i = 0; i< n ; i++) {
        count = 0;
        cin>>num;
        do {
            int dig = num%10;
            if(dig == 4) {
                count++;
            }
            num=num/10;
        } while(num>0);
        cout<<count<<"\n";
    }
	return 0;
}

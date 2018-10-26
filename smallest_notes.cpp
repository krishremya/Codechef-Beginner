//Find out the smallest number of notes for a given amount.
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc; 
    long value, cnt;
    cin>>tc;
    for(int i = 0; i < tc; i++) {
        cnt = 0;
        cin>> value;
        while(value != 0) {
            if(value >= 100){
                cnt++;
                value -= 100;
            }
            else if(value >= 50 && value < 100) {
                cnt++;
               value -= 50;
            }
            else if(value >= 10 && value < 50) {
                cnt++;
              value -= 10;
            } 
            else if(value >= 5 && value < 10) {
               cnt++;
               value -= 5;
            } 
            else if(value >= 2 && value < 5) {
               cnt++;
              value -= 2;
            } 
            else if(value < 2){
                cnt+= value;
            }
        } 
         cout<<cnt<<"\n";
    }
}


#include<stdio.h>
#include<string>
#include<stack>
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
        string s ;
        cin >> s;
        stack<char> stk;
        for(int i=0; i<s.size() ;i++) {
            stk.push(s[i]);
        }
        while(!stk.empty()){
            cout << stk.top() ;
            stk.pop() ;

        }
        cout << endl ;


    }
}

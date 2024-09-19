#include<bits/stdc++.h>
using namespace std;
enum work {laborer, secretary, manager, accountant, executive,
           researcher
          };
int main()
{
    int t;
    cin >> t;
    while(t--) {
    work wrk;
    char s;
    cout << "Provide the input :"  << endl;
    cin >> s;
    switch(s) {
case 'l' :
        wrk = laborer;
        break;
case 's' :
    wrk = secretary;
    break;
case 'm':
    wrk = manager;
    break;
case 'a':
    wrk = accountant;
    break;
case 'e':
    wrk = executive;
    break;
case 'r':
    wrk = researcher;
    break;
    }
    switch(wrk) {
case 0 :
    cout << "laborer" << endl;
    break;

case 1 :
    cout << "secretary" << endl;
    break;
case 2 :
    cout << "manager" << endl;
    break;
case 3 :
    cout << "accountant" << endl;
    break;
case 4 :
    cout << "executive" << endl;
    break;
case 5 :
    cout << "researcher" << endl;
    break;


    }
}
}

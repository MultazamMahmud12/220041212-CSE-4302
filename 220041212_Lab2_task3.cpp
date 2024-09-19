#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int a;
    int b;

}fraction;
int main() {
    fraction fr1, fr2 ,ans;
    char dum;
    cout << "Enter the first fraction:" << endl;
    cin >> fr1.a >> dum >> fr1.b ;
    cout << "Enter the second fraction:" << endl;
    cin >> fr2.a >> dum >> fr2.b ;
    ans.a = (fr1.a * fr2.b) + (fr1.b) * (fr2.a);
    ans.b = (fr2.b * fr2.b);
    cout << ans.a <<"/" << ans.b << endl;

}

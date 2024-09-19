#include<bits/stdc++.h>
using namespace std;
class RationalNumber
{
private :
    int nume;
    int deno;
public:
    void assign(int numerator, int denominator)
    {
        nume = numerator;

        deno = denominator;
        if(deno  == 0) cout << "You can not assign 0 as denominator." << endl;

    }
    float convert()
    {
        float x = (nume*1.00) / (deno*1.00) ;
        return x;
    }
    void invert()
    {
        if(nume == 0) cout << "You cannot assign 0 as denominator. "<< endl ;
        else
        {
            swap(nume,deno);
        }

    }
    void print()
    {
        cout << "The Rational Number is "<<nume<<"/"<<deno<<endl;
    }

};


int main()
{
    RationalNumber rn;
    int x ;
    int y ;
    cout << "Provide the first number: " << endl ;
    cin >> x ;
    cout << "Provide the second number" << endl;
    cin >> y;
    rn.assign(x,y);
    cout << rn.convert() << endl;
    rn.invert();
    // cout << rn.invert() << endl ;
    rn.print();


}

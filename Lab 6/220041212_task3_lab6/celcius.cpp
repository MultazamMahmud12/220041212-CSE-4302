#include "celcius.h"
#include<bits/stdc++.h>
using namespace std;
celcius::celcius()
{
    cel = 25.00;
}
celcius :: celcius(float x) : cel(x)
{

}
void celcius :: assign()
{
    cout << "Give celcius : " ;
    cin >> cel;
}
void celcius :: display()
{
    cout << "The temp is " << cel << endl;
}

//celcius::~celcius()
//{
//    //dtor
//}

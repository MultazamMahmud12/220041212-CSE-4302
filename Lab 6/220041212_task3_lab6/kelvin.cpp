#include "kelvin.h"

kelvin::kelvin()
{
  kel = 0;

}
kelvin :: kelvin(float x) : kel(x)
{

}
double kelvin :: operator - (float x)
{
    double y = kel - 273.15;
    return y;
}
//double kelvin :: operator= (double x)
//{
//    cel = x;
//    return cel ;
//}
void kelvin ::  assign()
{
    cout << "Provide the value : " << endl ;
    cin >> kel;
}
void kelvin :: display()
{
    cout << "The temp is in" << kel << " "  << endl;
    cout << "The temp in celcius: " << cel << " " << endl;
}

//kelvin::~kelvin()
//{
//    //dtor
//}

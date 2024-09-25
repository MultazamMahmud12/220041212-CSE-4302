#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
#define pi 3.1416
using namespace std;
class trigon_calc{
private:
    float currentAngle; 
    float getvalue()
    {
        return currentAngle; 
    }
    void setvalue(float x)
    {
        currentAngle = x; 
    }
public :
    trigon_calc() : currentAngle(0)
    {

    }
    trigon_calc(int x) : currentAngle(x)
    {

    }
    void value(float x)
    {
        setvalue(x); 
    } 
    float calculateSine()
    {
        float x = sin(getvalue());
        return x; 
        
    }
    float calculateCosine()
    {
        float x = cos(getvalue());
        return x; 

    }
    float calculateTangent()
    {
        float x = getvalue(); 
        if(((float)x/90) % 2.00 != (float)0) {
            setvalue(x);
            cout << "Warning wrong value provided"; 
            return x;  
           
        }
        else 
        {
            x = tan(x); 
            return x;  
        }

    }
    float calculateArcSine()
    {
          float y = getvalue();
        float x = 2 * pi * (y/360); 
        cout << "The radian equivalent of the angle: " << x << endl;
       
        y = asin(y); 
        return y; 

    }
    float calculateArcCosine()
    {
        float x = getvalue (); 
        float y = acos(x); 
        return y; 

    }
    float calculateArcTangent()
    {
        float x = getvalue (); 
        float y = atan(x); 
        return y; 

    }
    void calculateForAngle(float paramAngle)
    {
        cout << "The sine of this : " << sin(paramAngle) << endl ;
        cout << "The cosine of this : " << cos(paramAngle) << endl; 
        cout << "The tangent of this : " << tan(paramAngle) << endl; 


    }
    void clear()
    {
        setvalue(0); 
    }
    void display()
    {
        cout << "Current Display : " << currentAngle << endl; 
    }
    ~trigon_calc(){
        display();
        cout << "Destructor of that following function is called" <<endl;
    }







};
int main()
{
    trigon_calc tg; 
    tg.value(20.00);
    cout << "Sine :" << tg.calculateSine() << endl;
    cout << "Cosine : " << tg.calculateCosine() << endl; 
    cout <<"Tangent : " <<  tg.calculateTangent() << endl;
    cout <<"Arc cosine : " <<  tg.calculateArcCosine () << endl; 
    cout << "Arc sine : " << tg.calculateArcSine () << endl; 
    cout << " Arc tangent :" << tg.calculateArcTangent() << endl; 
    tg.calculateForAngle(30); 
    tg.display(); 
    tg.clear(); 
    tg.display() ;


}
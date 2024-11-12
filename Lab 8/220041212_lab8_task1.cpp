#include<bits/stdc++.h>
using namespace std;
class vehicles
{
protected:
    int license_plate;
    string manufacturer;
    int carrier_size;
public:
    vehicles() : license_plate(0), manufacturer(""),carrier_size(0)
    {

    }
};
class gasoline : public vehicles
{
protected:
    int fuel_capacity;
    string fuel_type;
public :
    gasoline() : fuel_capacity(0), fuel_type("")
    {

    }

};
class electric : public vehicles
{
protected:
    int battery_cap;
    int charging_time;
public:
    electric() : battery_cap(0),charging_time(0)
    {

    }
};
class motorcycle : public gasoline
{

};
class cars : public gasoline
{
protected:
    int number_pass;
public:
    cars() : number_pass(0)
    {

    }
};
class truck : public gasoline
{
protected:
    int cargo_cap;
public:
    truck() : cargo_cap(0)
    {

    }
};
class hybrid : public gasoline, public electric
{
private:
    int reg_efficiency;
public:
    hybrid() : reg_efficiency(0)
    {

    }

};

class branch
{
private:
    int manager_id[10];
    string manager[10];
    int driver_id[30];
    string driver[30];
    int i;
public:

    void set_managers()
    {

        for( i=0; i<10; i++)
        {
            manager_id[i] = i;
            cin >> manager[i];
        }

    }
    void set_drivers()
    {
        for(int j=0; j<30; j++, i++ )
        {
            driver_id[j] = i;
            cin >> driver[j];
        }

    }
    void display()
    {
        for( i=0; i<10; i++)
        {
            cout << "Mr." << manager[i] << endl;
        }
        for( i=0; i<30; i++)
        {
            cout << driver[i] << endl;
        }
    }
};

class maintenence_check
{
    string maintained_vehicle;
public:
    maintenence_check(string x) : maintained_vehicle(x)
    {
        cout << x << "-check" << endl;
    }
};
int main()
{

}

#include<bits/stdc++.h>
using namespace std;
// Task 1
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
    void setCarrierSize()
    {
        cout << "Provide Carrier Size : " << endl;
        cin >> carrier_size;

    }
    int getCarrierSize()
    {
        return carrier_size;
    }
    virtual void performMaintanance() = 0;
    virtual void display() =0;
    virtual double fuel_orElectricityConsumption(double distance) = 0;
};

// Task2

enum fuel
{
    petrol,
    octane,
    CNG
};

class gasoline : public vehicles
{
protected:
    int fuel_capacity;
    fuel fuel_type;
public :
    gasoline() : fuel_capacity(0), fuel_type()
    {

    }
    gasoline(int x, fuel type) : fuel_capacity(x),fuel_type(type)
    {

    }
    void display()
    {
        cout << "fuel capacity : " << fuel_capacity << endl;
        cout << "fuel type : " << fuel_type << endl ;
    }
    double fuel_orElectricityConsumption(double distance)
    {
        // cout << "Kochu" << endl;
        // cout << fuel_capacity << endl;
        return (distance/100) * fuel_capacity ;



    }
    void performMaintanance()
    {
        cout << "Gasoline vehicles are in maintanance ..."  << endl ;
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
    electric(int x,int y) : battery_cap(x),charging_time(y)
    {

    }
    void display()
    {
        cout << "Battery capacity : " << battery_cap << endl;
        cout << "Charging time : " << charging_time << endl ;
    }
    double fuel_orElectricityConsumption(double distance)
    {
        return (distance / 100) * battery_cap;


    }
    void performMaintanance()
    {
        cout << "Electric vehicles are in maintanance ..."  << endl ;
    }
};


//TASK 3

class motorcycle : public gasoline
{
public :
    void performMaintanance()
    {
        cout << "Motorcycle - maintanance"  << endl ;
    }

};

class cars : public gasoline
{
protected:
    int passangerCapacity;
public:
    cars() : passangerCapacity(0)
    {

    }
    void performMaintanance()
    {
        cout << "Cars - maintanance"  << endl ;
    }
};

class truck : public gasoline
{
protected:
    int cargoCapacity;
public:
    truck() : cargoCapacity(0)
    {

    }
    void performMaintanance()
    {
        cout << "Truck - maintanance"  << endl ;
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
    hybrid(int eff) : reg_efficiency(eff)
    {

    }
    void display()
    {
        cout << "reg_efficiency : " << reg_efficiency << endl;
        //cout << "Charging time : " << charging_time << endl ;
    }
    double fuel_orElectricityConsumption(double distance)
    {
        // calculateGasolineFuelConsumption(2.22);
        //electricity_consumption();
        vehicles* ch ;
        ch = new gasoline;
        double sum = ch -> fuel_orElectricityConsumption(2.222);
        ch = new electric;
        sum = sum + ch -> fuel_orElectricityConsumption(3.222);
        return sum ;


    }


};

void sort_vehicles_by_capacity(vehicles** vehicles, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(vehicles[j] -> getCarrierSize() > vehicles[i] ->getCarrierSize())
            {
                /* vehicles* vhhh;
                 vhhh =vehicles[i];
                 vehicles[i] = vehicles[j];
                 vehicles[j] =  vhhh;*/
                swap(vehicles[j], vehicles[i]);
            }
        }
    }


}


int main()
{
    int n =3;
    vehicles* vh[n];
    for(int i=0; i<n; i++)
    {
        vh[i] = new gasoline ;
        vh[i] -> setCarrierSize();
    }
    sort_vehicles_by_capacity(vh, n) ;
    for(int i=0; i<n; i++)
    {
        cout << vh[i] -> getCarrierSize() << endl;
    }
    gasoline gas(10,CNG);
    vehicles* ptr;
    ptr = &gas;
    ptr -> display() ;
    cout << ptr->fuel_orElectricityConsumption(10.2) << endl;
    electric elec(12,12);
    ptr = &elec;
    ptr -> display() ;
    cout << ptr -> fuel_orElectricityConsumption(102.22) << endl;
    hybrid* hbd= new hybrid ;
    // ptr = &hbd;
    hbd -> display();
    cout << hbd -> fuel_orElectricityConsumption (10.11) << endl;



}

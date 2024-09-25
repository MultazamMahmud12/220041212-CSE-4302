#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
enum Level
{
    low,
    moderate,
    high

};
class beton
{
private:
    Level currentLevel;
    string EmpName ;
    int id;
    int age;
    int salary;
    Level getStatus()
    {
        if(age <= 25)
        {
            if(salary <= 20000) return low;
            else if(salary > 20000) return  moderate ;
        }
        else
        {
            if(salary <= 21000) return low;
            else if(salary > 21000 && salary <= 60000) return moderate;
            else return high;
        }

    }
public :
    void FeedInfo()
    {
        cout << "Provide the EmpName :";
        string emp; 
        cin >> emp; 
        EmpName= emp; 
        cout << "Provide the ID :"; 
        int id_number; 
        cin >> id_number; 
        id = id_number; 
        cout << "Provide the salary :"; 
        int the_salary; 
        cin >> the_salary; 
        salary= the_salary; 



    }
    void showinfo()
    {
        cout <<"Ëmpname : " << EmpName << endl ;
        cout << "ID : "<< id << endl; 
        currentLevel = getStatus(); 
        switch (currentLevel)
        {
        case high:
            cout << "High salaried person"; 
            break;
        case moderate:
            cout << "Moderate Salaried Person"; 
            break ;
        case low:
            cout << "Low salaried Person ";
            break ; 
        default:
            break;
        }



    }



};



int main()
{
    beton amar;
    amar.FeedInfo(); 
    amar.showinfo();  

   
}

#include <iostream>
#include"Student.h"
#include<vector>
#include<bits/stdc++.h>



using namespace std;
vector<Student> ar;
void EditInformationByKeyboard(Student obj)
{
    string tempString ;
    cout <<"Provide the Student Name :" << endl;
    cin >> tempString;
    obj.SetStudentName(tempString);
    //cout << obj.GetStudentName();
    cout << "Provide Dept : " << endl;
    cin >> tempString;
    obj.Setdepartment(tempString) ;
    //cout << obj.Getdepartment();
    cout << "Provide Program: ";
    cin >> tempString ;
    obj.Setprogram(tempString) ;
    cout << "Section : " << endl;
    cin >> tempString;
    obj.Setsection(tempString) ;
    cout << "Admission year : " << endl;
    int temp;
    cin >> temp;
    obj.SetAdmission_year(temp);
    cout << "Address: ";
    cin.ignore();
    getline(cin, tempString);
    obj.SetAddress(tempString);
    cout << "What's your cg ?" << endl;
    float t ;
    cin >> t;
    obj.Setgpa(t);
    ar.push_back(obj);
}
void DisplayStudentInfo(Student obj)
{

    cout << "Student Name: " << obj.GetStudentName() << endl;
    cout << "Department: " << obj.Getdepartment() << endl;
    cout << "Program: " << obj.Getprogram() << endl;
    cout << "Section: " << obj.Getsection() << endl;
    cout << "Admission Year: " << obj.GetAdmission_year() << endl;
    cout << "Address: " << obj.GetAddress() << endl;
    cout << "GPA: " << obj.Getgpa() << endl;
    cout << "Generated ID: " << obj.generateID() << endl;
}
void generateInformationRandom(Student obj)
{
    string randomString;
    const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int alphabetSize = sizeof(alphabet) - 1; // Exclude null character

    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    for (int i = 0; i < 5; ++i)
    {
        randomString += alphabet[rand() % alphabetSize];
    }

    string random;
    //const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //int alphabetSize = sizeof(alphabet) - 1; // Exclude null character

    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    for (int i = 0; i < 5; ++i)
    {
        random += alphabet[rand() % alphabetSize];
    }
    randomString += " " + random ;
    obj.SetStudentName(randomString);
    int min= 2020, max= 2023;
    if (min > max)
    {
        swap(min, max); // Swap if min is greater than max
    }

    obj.SetAdmission_year(rand() % (max - min + 1) + min);
    randomString ="";
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    for (int i = 0; i < 5; ++i)
    {
        randomString += alphabet[rand() % alphabetSize];
    }

    obj.SetAddress(randomString);






}
void ShowAllAlphabetically(Student ar[])
{
//    for(auto i: ar)
//    {
//
//
//    }


}
int main()
{
    Student s1     , s2;

    //EditInformationByKeyboard(s1);
    //DisplayStudentInfo(s1);
    cout << "Onek try korsi sir , partesina" << endl;
    return 0;
}

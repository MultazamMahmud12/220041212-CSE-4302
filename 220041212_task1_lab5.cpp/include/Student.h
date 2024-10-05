#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include<time.h>
#include<iostream>
const int x=220041212;
using namespace std;


class Student
{
public:
    Student();
    virtual ~Student();

    string GetStudentName()
    {
        return StudentName;
    }
    void SetStudentName(string val)
    {
        StudentName = val;
    }
    string Getdepartment()
    {
        return department;
    }
    void Setdepartment(string val)
    {
        department = val;
    }
    string Getprogram()
    {
        return program;
    }
    void Setprogram(string val)
    {
        program = val;
    }
    string Getsection()
    {
        return section;
    }
    void Setsection(string val)
    {
        section = val;
    }
    int GetAdmission_year()
    {
        return Admission_year;
    }
    void SetAdmission_year(int val)
    {
        Admission_year = val;
    }
    string GetAddress()
    {
        return Address;
    }
    void SetAddress(string val)
    {
        Address = val;
    }
    float Getgpa()
    {
        return gpa;
    }
    void Setgpa(float val)
    {
        gpa = val;
    }
    int generateID()
    {
        int min= x ;
        int max= 220041300;
        if(min < max) swap(min,max);
        return rand() % (max - min + 1) + min;
    }
    float calculateGPA()
    {

    }

protected:

private:
    string StudentName;
    string department;
    string program;
    string section;
    int Admission_year;
    string Address;
    float gpa;
};



#endif // STUDENT_H

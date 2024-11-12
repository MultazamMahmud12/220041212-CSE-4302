#include<bits/stdc++.h>
#include<string>
using namespace std;
int randomInRange(int min, int max)
{

    if (min > max)
    {
        swap(min, max);
    }

    return rand() % (max - min + 1) + min;
}

class account
{
protected:
    string account_no;
    string account_name;
    float balance;
    static int next_acc;
public :
    account() : account_no (""), account_name ("")
    {

    }
    account(string x, float y) : account_name(x), balance(y)
    {
        next_acc ++ ;
//        int randomNumber = randomInRange(0,100);
        //      int no = randomInRange(101,200);
        //account_no = account_no +  + to_string(no);

    }
    void set()
    {
        cout << "account name: ";
        cin >> account_name;
        cout << "balance : ";
        cin >> balance;
    }
    float get_balance()
    {
        return balance;
    }
    string get_account_name()
    {
        return account_name;
    }



};
class currentAccount : public account
{
protected:
    const static int serviceCharge=100;
    const static int account_pref_current =100;

public:
    string get()
    {
        return account_no;

    }

    int nextAccountno()
    {
        return next_acc;
    }
    void set_account_no()
    {
        account_no = to_string(account_pref_current) + to_string(next_acc);
    }

};
int account ::
next_acc = 0  ;

class savingAccount : public account
{
protected:
    int interestRate;
    int monthlyDepositAmount ;
    const static int account_pref_saving = 200;
public:
    savingAccount() : interestRate(0), monthlyDepositAmount(0)
    {

    }
    void get()
    {

    }
    int nextAccountno()
    {
        return next_acc ;
    }
    void set_account_no()
    {
        account_no = to_string(account_pref_saving) + to_string(next_acc);
    }


};
class monthlyDepositScheme : public account
{
    int interestRate;
    int monthlyDepositAmount;
    const static int account_pref_mds = 300;
public :
    monthlyDepositScheme() : interestRate(0), monthlyDepositAmount(0)
    {

    }
    void set()
    {

    }
    int getinterestRate()
    {
        return interestRate;
    }
    int nextAccountno()
    {
        return next_acc;
    }
    void set_account_no()
    {
        account_no = to_string(account_pref_mds) + to_string(next_acc);
    }

};
class loanAccount : public account
{
    int interestRate;
    int monthlyDepositAmount;
    const static int accountPref_loan = 900;
public :
    void set()
    {

    }
    void get()
    {

    }
    void set_account_no()
    {
        account_no = to_string(accountPref_loan) + to_string(next_acc);
    }



};
class two_mds
{
    int max_interest;
public :
    void set()
    {

    }
    int get_interest()
    {
        return max_interest;
    }
    void description()
    {
        cout << "two year mds" ;
    }


};
class five_mds
{
    int max_interest;
public :
    void set()
    {

    }
    int get_interest()
    {
        return max_interest;
    }
     void description()
    {
        cout << "five year mds" ;
    }

};
class initial_mds
{
    int max_interest;
    int ida;
public :
    void set()
    {

    }
    int get_interest()
    {
        return max_interest;
    }
    int get_ida()
    {
        return ida;
    }
     void description()
    {
        cout << "initial year mds" ;
    }

};

int main()
{
 currentAccount ca;
 ca.set_account_no();
 cout << ca.get() << endl; ;
 //ca.display();
}

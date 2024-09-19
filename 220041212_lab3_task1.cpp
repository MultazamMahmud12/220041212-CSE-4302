#include<bits/stdc++.h>
using namespace std;
class Counter
{
private:
    int incre = 0 ;
    int cnt = 0;



public:
//    void setcount() {
//        int x ; cin >> x;
//        incre = x ;
//    }
    void setIncrementStep(int x)
    {
        incre =x ;

    }
    int getCount()
    {
        return cnt ;
    }
    void increment ()
    {
        cnt += incre ;
    }
    void resetCount ()
    {
        cnt = 0 ;
    }


};
int main(){

    Counter cnter ;
    cnter.setIncrementStep(5);
    cout << cnter.getCount() << endl;
    cnter.increment();
    cout << cnter.getCount() << endl;
    cnter.resetCount();
    cout << cnter.getCount() << endl;


}

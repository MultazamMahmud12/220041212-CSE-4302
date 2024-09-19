#include<bits/stdc++.h>
#include<string>
using namespace std;
class Medicine{
private :
    char trade_name[30] ;
    char generic_name[30] ;
    double unit_price;
    double discountPercent =5 ;
    double sell_price ;
public :
    void assignName(char name[],char genericName[]) {
        strcpy(trade_name,name);
        strcpy(generic_name,genericName);
    }
    void assignPrice(double price)
    {
        if(price < 0) unit_price =0 ;
        else {
            unit_price = price;
        }
    }
    void setDiscount(double percent)
    {
        if(percent >= 30) discountPercent = percent;

    }
    double getSellingPrice(int nos=1)
    {
       sell_price = unit_price - discountPercent;
       return sell_price*nos;

    }
    void display()
    {
        cout << "MRP. of Napa (Paracetamol) is BDT"<<unit_price<<". Current discount"<<discountPercent<<". Selling price BDT"<< sell_price;

    }


};
int main()
{
    Medicine medic;
    medic.assignName("Napa","Paracetamol");
    medic.assignPrice(1000);
    medic.setDiscount(100);
    medic.getSellingPrice(2);
    medic.display();


}

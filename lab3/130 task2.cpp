//2
#include <iostream>
using namespace std;

class Medicine
{
private:
    string name;
    string genericName;
    double unitPrice;
    double discountPercent;

public:
    void assignName(string n,string g){
        name=n;
        genericName=g;
    }
    void assignPrice(double pr){
        if(pr>=0.f)unitPrice=pr;
        else cout << "Price can't be negative"<<endl;
    }
    void setDiscountPercent(double pe){
        if (pe>=0.f && pe<= 45.f)discountPercent=pe;
        else cout<<"Discount percentage is not in range"<<endl;
    }
    double getSellingPrice(int nos){
        double a=(unitPrice-(unitPrice*(discountPercent/100)))*nos;
        return a;
    }
    void display(){
        cout<<name<<" ("<<genericName<<") has a unit price of BDT "<<unitPrice<<". Current discount "<<discountPercent<<endl;
    }
};
int main()
{
    Medicine m;
    m.assignName("paracetamol","napa");
    m.assignPrice(100);
    m.setDiscountPercent(20.5f);
    m.display();
    cout<<"After Discount Price"<<m.getSellingPrice(1)<<endl;

    return 0;
}

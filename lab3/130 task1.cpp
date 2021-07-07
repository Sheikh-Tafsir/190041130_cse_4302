//1
#include <iostream>
using namespace std;

class RationalNumber{
private:
    int numerator;
    int denominator;

public:
    void print(){
        cout<<"The Rational Number is "<<numerator<<"/"<<denominator<<endl;
    }
    void assign(int num, int denom){
        if (denom==0){
            cout<<"Error,Denominator can not be 0"<<endl;
            return;
        }
        numerator=num;
        denominator=denom;
        print();
    }
    double convert(){
        double a=(double)numerator/denominator;
        return a;
    }
    void invert(){
        if (!numerator)
        {
            cout<<"Error,Denominator can not be 0"<<endl;
            return;
        }
        swap(numerator,denominator);
        cout<<"after inverting ";
        print();
    }

};

int main(){
    int n1,n2;
    cin>>n1>>n2;

    RationalNumber n;
    n.assign(n1,n2);
    cout<<n.convert()<<endl;
    n.invert();
}

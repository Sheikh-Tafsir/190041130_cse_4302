//1
#include<bits/stdc++.h>
using namespace std;
class rational_number
{
private:
    double num,den;
    bool error_check(int d){
        bool error=false;
        if(d==0){
            error=true;
            return error;
        }
        else return error;
    }

public:
    rational_number():num(0),den(1){}
    ~rational_number() {}

    void set_num(int n){
        num=n;
    }
    void set_den(int d){
        if(error_check(d)){
            den=0;
            num=0;
        }
        else{
            den=d;
        }
    }
    int get_num(){
        return num;
    }
    int get_den(){

        return den;
    }
    double result(){
        return ceil((double)num/(double)den);
    }
    double operator+(rational_number right)
    {
        return ( (num/den) + (right.num/right.den) );
    }
    double operator-(rational_number right)
    {
        return ( (num/den) - (right.num/right.den) );
    }
    double operator*(rational_number right)
    {
        return ( (num/den) * (right.num/right.den) );
    }
    double operator/(rational_number right)
    {
        if (right.num==0) cout<<"Cant divide by zero"<<endl;
        else return ( (num/den) / (right.num/right.den) );
    }

};

int main()
{
    rational_number f1,f2;
    f1.set_num(5);
    f1.set_den(25);
    cout<<f1.get_num()<<" "<<f1.get_den()<<endl;
    f2.set_num(3);
    f2.set_den(9);
    double f3 = f1 / f2;
    cout << f3 << endl;
}

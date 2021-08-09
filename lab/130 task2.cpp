//2
#include <bits/stdc++.h>
using namespace std;
#define pi 3.1416
class seat{
private:
    string comfortability;
    string SeatWarmerPresence;
public:
    seat(){
        comfortability="";
        SeatWarmerPresence="no";
    }
    void setseat(){
        cout<<"Enter comfortability:"<<endl;
        cin>>comfortability;
        cout<<"Is seat warmer present?:"<<endl;
        cin>>SeatWarmerPresence;

    }
    void getseat(){
        cout<<"the seat is "<<comfortability<<endl;
        if(SeatWarmerPresence=="yes")cout<<"seat warmer is present"<<endl;
        else cout<<"seat warmer is not present"<<endl;
    }
    ~seat(){
    }
};

class wheel{
private:
    int radius;
public:
    wheel():radius(0){
    }
    void setwheel(){
        cout<<"Enter radius:"<<endl;
        cin>>radius;
    }
    void getwheel(){
        cout<<"The circumference is "<<(double)(2*radius*pi)<<endl;
    }
    ~wheel(){
    }
};

class engine{
private:
    double MaximumFuelConsumptionRate;
    double MaximumEnergyProductionRate;
    double AverageRPM;
public:
    engine(){
    }
    void setengine(){
        cout<<"Enter Maximum Fuel Consumption Rate: "<<endl;
        cin>>MaximumFuelConsumptionRate;
        cout<<"Enter Maximum Energy Production Rate is:"<<endl;
        cin>>MaximumEnergyProductionRate;
        cout<<"Enter Average RPM is:"<<endl;
        cin>>AverageRPM;
    }
    void getengine(){
        cout<<"Maximum Fuel Consumption Rate is: "<<MaximumFuelConsumptionRate<<endl;
        cout<<"Maximum Energy Production Rate is: "<<MaximumEnergyProductionRate<<endl;
        cout<<"Average RPM is: "<<AverageRPM<<endl;
    }
    ~engine(){
    }
};
class door{
private:
    string OpeningMode;
public:
    door(){
    }
    void setdoor(){
        cout<<"Enter opening mode of car:"<<endl;
        cin>>OpeningMode;
    }
    void getdoor(){
        cout<<"Opening Mode of car is: "<<OpeningMode<<endl;
    }
    ~door(){
    }

};
class car{
private:
    double MaximumAcceleration;
    double FuelCapacity;
    seat st;
    wheel wl;
    engine egn;
    door dr;
public:
    car():MaximumAcceleration(0),FuelCapacity(0){
    }
    void setcar(){
        cout<<"Enter Maximum Acceleration of car:"<<endl;
        cin>>MaximumAcceleration;
        cout<<"Enter Fuel Capacity of car:"<<endl;
        cin>>FuelCapacity;

        st.setseat();
        wl.setwheel();
        egn.setengine();
        dr.setdoor();

    }
    void getcar(){
        cout<<"Maximum Acceleration of car is: "<<MaximumAcceleration<<endl;
        cout<<"Fuel Capacity of car is: "<<FuelCapacity<<endl;

        st.getseat();
        wl.getwheel();
        egn.getengine();
        dr.getdoor();
    }

    ~car(){
    }

};
int main()
{
    car c;
    c.setcar();
    c.getcar();


    return 0;
}
//Tafsir Rahman
//190041130

//3
#include <iostream>
using namespace std;
class time{
private:
    int hour=1;
    int minute=2;
    int second=3;

public:
    int hours(){
        return hour;
    }
    int minutes(){
        return minute;
    }
    int seconds(){
        return second;
    }
    void advance(int h,int m, int s){
            second+=s;
            if(second>=60){
                minute+=(second/60);
                second=(second%60);
            }

            minute+=m;
            if(minute>=60){
                hour+=(minute/60);
                minute=(minute%60);
            }

            hour+=h;
            hour%=24;
    }
    void reset(int h,int m,int s){
        if(h>=0 && h<24 && m>=0 && m<60 && s>=0 && s<60){
            hour=h;
            minute=m;
            second=s;
        }
        else cout<<"Error, in accurate values"<<endl;
    }
    void print(){
        cout<<"current"<<endl;
        cout<<"hour "<<hours()<<endl;
        cout<<"minute "<<minutes()<<endl;
        cout<<"second "<<seconds()<<endl;
    }
};
int main()
{

    time t;
    cout<<"given time"<<endl;
    cout<<"hour "<<t.hours()<<endl;
    cout<<"minute "<<t.minutes()<<endl;
    cout<<"second "<<t.seconds()<<endl<<endl;
    while(1){
        int n;
        int h,m,s;
        cin>>n>>h>>m>>s;
        if(n==1){
            t.reset(h,m,s);
            cout<<"after reset"<<endl;
            t.print();
            /*cout<<"hour"<<t.hours()<<endl;
            cout<<"minute"<<t.minutes()<<endl;
            cout<<"second"<<t.seconds()<<endl;*/
        }
        else if(n==2){
            t.advance(h,m,s);
            cout<<"advance"<<endl;
            t.print();
            /*cout<<"hour"<<t.hours()<<endl;
            cout<<"minute"<<t.minutes()<<endl;
            cout<<"second"<<t.seconds()<<endl;*/
        }
        else if(n==3){
            t.print();
        }
        else break;
    }


    return 0;
}


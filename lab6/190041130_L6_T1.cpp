//1
#include<bits/stdc++.h>
using namespace std;

class counter
{
private:
    int istep;
    int cnt;
public:
    counter(): cnt(0), istep(0){}
    counter(int c): cnt(c){}
    counter(int c, int s): cnt(c), istep(s){}
    void setIncrementStep(int step_val){
        istep = step_val;
    }
    int getCount(){
        return cnt;
    }
    void increment(){
        cnt+=istep;
    }
    void resetCount(){
        cnt = 0;
    }

    counter operator ++(){
        return counter(++cnt);
    }
    counter operator ++(int){
        return counter(cnt++);
    }
    counter operator + (counter);
    counter operator + (int);
    friend counter operator + (int , counter);
    void operator += (counter);
};

counter counter::operator + (counter right){
    int a = cnt+right.cnt;
    int b = min(istep, right.istep);
    return counter(a,b);
}

counter counter::operator + (int var){
    int a = cnt+var;
    return counter(a, istep);
}
 counter operator + (int var, counter right){
     int a = var+right.cnt;
     return counter(a, right.istep);
 }

void counter::operator += (counter right){
    cnt+=right.cnt;
}

int main()
{
    int var = 5;
    counter c;
    cout<<c.getCount()<<endl;
    c.setIncrementStep(1);

    c.increment();
    cout<<c.getCount()<<endl;

    c.resetCount();
    cout<<c.getCount()<<endl;

    counter c1(4, 25),c2(13, 56),c3(23,16);

    cout<<(++c1).getCount()<<endl;

    c1 = c2+c3;
    cout<<c1.getCount()<<endl;

    c1 = c2+var;
    cout<<c1.getCount()<<endl;

    c1 = var+c2;
    cout<<c1.getCount()<<endl;

    c1+=c2;
    cout<<c1.getCount()<<endl;

    return 0;
}


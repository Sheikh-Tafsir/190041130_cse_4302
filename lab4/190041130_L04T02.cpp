//2
#include<bits/stdc++.h>
using namespace std;
class c{
private:
    string EmpName;
    int id;
    int age;
    double sal;
    void getStatus(){
        if(age<=25){
            if(sal<=20000)cout<<"low"<<endl;
            else cout<<"moderate"<<endl;
        }
        else{
           if(sal<=21000)cout<<"low"<<endl;
           else if(sal<=60000)cout<<"moderate"<<endl;
           else cout<<"high"<<endl;
        }
    }
public:
    void FeedInfo(string EmpName1,int id1,int age1,int sal1){
        EmpName=EmpName1;
        id=id1;
        age=age1;
        sal=sal1;

    }
    void ShowInfo(){
        cout<<"name :"<< EmpName<<endl;
        cout<<"id :"<<id<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"salary :"<<sal<<endl;
        getStatus();
    }
};
int main()
{
    c c1;
    c1.FeedInfo("Tafsir",130,21,40000);
    c1.ShowInfo();
    return 0;
}

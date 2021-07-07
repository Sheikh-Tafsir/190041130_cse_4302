//3
#include<bits/stdc++.h>
using namespace std;
class StudentResult{
private:
    static int pass_mark;
    int sub_mark[6];
    bool pass;
public:
    StudentResult(){
        sub_mark[0]=0;
        sub_mark[1]=0;
        sub_mark[2]=0;
        sub_mark[3]=0;
        sub_mark[4]=0;
        sub_mark[5]=0;
        pass=true;
    }
    void setMarks(int a1,int a2,int a3,int a4,int a5,int a6){
        sub_mark[0]=a1;
        sub_mark[1]=a2;
        sub_mark[2]=a3;
        sub_mark[3]=a4;
        sub_mark[4]=a5;
        sub_mark[5]=a6;
    }
    void displayMark(){
        for(int i=0;i<6;i++){
            cout<<"subject no "<<i+1<<" marks :"<<sub_mark[i]<<endl;
        }
    }
    void checkPassing(){
        for(int i=0;i<6;i++){
            if(sub_mark[i]<pass_mark)pass=false;
        }
        if(pass==false)cout<<"failed the semester"<<endl;
        else cout<<"successfully passed the semester"<<endl;
    }
};
int StudentResult::pass_mark=40;
int main()
{
    StudentResult s;
    s.setMarks(50,74,87,94,43,77);
    s.displayMark();
    s.checkPassing();
}

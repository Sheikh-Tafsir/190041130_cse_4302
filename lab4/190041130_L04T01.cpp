//1
#include<bits/stdc++.h>
using namespace std;
class BankAccount{
private:
    int acn;
    string name;
    bool type;
    int bal;
    int mini;
public:
    BankAccount(){
        acn=0;
        name="";
        type="";
        bal=0;
        mini=500;
    }
    BankAccount(int acn1,string name1,bool type1,int bal1,int mini1){
        acn=acn1;
        name=name1;
        type=type1;
        bal=bal1;
        mini=mini1;
    }
    void show_bal(){
        cout<<"current balance "<<bal<<endl;
        return;
    }
    void print(){
        cout<<"account no "<<acn<<endl;
        cout<<"name "<<name<<endl;
        if(type==true)cout<<"account type savings"<<endl;
        else cout<<"account type current"<<endl;
        cout<<"minimum bal "<<mini<<endl;
        show_bal();
        return;
    }
    void deposit(int amm){
        bal+=amm;
        cout<<"deposited"<<endl;
        show_bal();
        return;
    }
    void withdraw(int amm){
        if(bal-amm<mini){
            cout<<"invalid ammount"<<endl;
        }
        else{
            bal-=amm;
            cout<<"withdrawn"<<endl;
            show_bal();
        }
        return;
    }
    void giveInterst(){
        double int_rate=3;
        int inte=(int)bal*(int_rate/100);
        inte-=(inte/10);
        bal+=inte;
        cout<<"after interest"<<endl;
        show_bal();
        return;
    }
    ~BankAccount(){
        cout<<"Account of Mr. "<<name<<" with account no "<<acn<<" is destroyed with a balance BDT "<<bal<<endl;
    }
};
int main()
{
    int acn=1234;
    string name="Tafsir";
    int bal=20000;
    int mini=500;
    BankAccount b(acn,name,false,bal,mini);
    b.print();
    b.deposit(2000);
    b.withdraw(5000);
    b.giveInterst();
    return 0;

}

//Tafsir Rahman
//IUT CSE
//190041130

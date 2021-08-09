//1
#include<bits/stdc++.h>
using namespace std;
time_t current_time= time(NULL);

class Animal{
private:
      string name;
      string area;
      string sound;
      int weight;
      int height;
      int birth;
public:
      Animal(){
            name="animal";
            area="";
            sound="";
            weight=0;
            height=0;
            birth=2021;
      }
      void nameset(string n){
            name=n;
      }
      void areaset(string a){
            area=a;
      }
      void soundset(string s){
            sound=s;
      }
      void weightset(int w){
            weight=w;
      }
      void heightset(int h){
            height=h;
      }
      void birthset(int b){
            if(b<=2021)birth=b;
            else cout<<"birth year cant be greater than 2021"<<endl;
      }
      void birthset(){
            birth=2021;
      }


      string nameget(){
            return name;
      }
      string areaget(){
            return area;
      }
      string soundget(){
            return sound;
      }
      int weightget(){
            return weight;
      }
      int heightget(){
            return height;
      }
      int birthget(){
            return birth;
      }

      void getInformation(){
            cout<<"Name of animal: "<<name<<endl;
            cout<<"Habitat area of "<<name<<": "<<area<<endl;
            cout<<"Sound of "<<name<<": "<<sound<<endl;
            cout<<"Height of "<<name<<" in feet: "<<height<<endl;
            cout<<"Weight of "<<name<<" in kg: "<<weight<<endl;
            cout<<"Birth Year of "<<name<<" : "<<birth<<endl;
      }
      void getAge(){
            cout<<name<<"'s age is: "<<(current_time/(86400*365))-birth+1970<<endl<<endl;
      }
      void vocalize(){
            cout<<sound<<endl;
      }
      void changeweight(int pound){
          weight=pound;
      }

      ~Animal(){}
};
class Cow:public Animal{
private:
public:
      Cow(){
            soundset("moo");
      }
      ~Cow(){}

};
class Chicken: public Animal{
private:
public:
      Chicken(){
            soundset("buck buck");
      }
      ~Chicken(){
      }

};
class Cat: public Animal{
private:
public:
      Cat(){
            soundset("meow");
      }
      ~Cat(){
      }

};
int main()
{
      Animal a;
      a.getInformation();

      Cat c;
      c.nameset("mew");
      c.areaset("IUT");
      c.weightset(3);
      c.heightset(1);
      c.birthset(2019);
      c.getInformation();
      c.getAge();

      Cow co;
      co.nameset("red");
      co.areaset("gazipur");
      co.weightset(80);
      co.heightset(6);
      co.birthset(2017);
      co.getInformation();
      co.getAge();
      co.changeweight(75);
      cout<<"updated weight is: "<<co.weightget()<<endl;


      return 0;
}
//Tafsir Rahman
//190041130


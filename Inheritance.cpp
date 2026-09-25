#include<iostream>
using namespace std;

class empl{
    public:
    string name;
    double salary;

    empl(string n,double s):name{n},salary{s}{}

    void showEmpl(){
        cout<<name<<" "<<salary<<endl;
    }
};

class manager : public empl{
 public:
  string id;

    manager(string n, double s, string i) : empl(n, s){
        id = i;
    }

 void showmanager(){
    cout<<name<<" "<<id<<" "<<salary<<endl;
 }
};

int main(){
manager m1("Ashwin",200000,"ash");
m1.showEmpl();

}
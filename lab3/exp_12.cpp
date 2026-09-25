#include<iostream>
using namespace std;

void area(double radius){
   cout<<"area : "<<2*3.14*radius<<endl;
}
void area(double length,double width){
    cout<<"area : "<<length*width<<endl;
}
void area(int side){
    cout<<"area : "<<side*side<<endl;
}
void area(double base,double height,bool traingle){
    if(traingle == 0){
        return area(base,height);
    }
    cout<<"area : "<<0.5*(base)*(height)<<endl;
}
int main(){
    area(5.0);
    area(5,6);
    area(4);
    area(4,5,0);

}
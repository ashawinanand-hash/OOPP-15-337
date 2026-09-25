#include<iostream>
using namespace std;

inline int sum(int a = 0,int b = 0){
    return a + b;
}
inline float sum(float a = 0.0F,float b = 0.0F){
    return a + b;
}

int main(){
    int a = sum(2,3);
    float b = sum(2.3F,3.2F);
    cout<<a<<" "<<b;
}
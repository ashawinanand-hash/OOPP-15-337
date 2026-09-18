#include<iostream>
using namespace std;

int fun1(int &x){
    x = x + (x/10);
    return x;
}

int fun2(int *x){
    *x = *x + (*x/10);
    return *x;
}

int main(){
int salary = 1000;
// int &newsalary = salary;
// fun1(newsalary);
int *newsalary = &salary;
fun2(newsalary);
cout<<salary;
}
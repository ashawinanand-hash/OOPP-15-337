# include <iostream>
using namespace std ;
void swapValue(int x, int y){
    int temp = x;
    x=y;
    y = temp;
}
void swapAddress(int *x,int *y){
    int temp = *x;
    *x =*y;
    *y = temp;
}
void swapReference(int &x,int &y){
    int temp = x;
    x =y;
    y = temp;
}

int main(){
int x,y;

}
#include<iostream>

using namespace std;

int main(void){
    int a, b;
    float c;

    a = 13;
    b = 5;

    c = a+b;
    cout<<"Sum= "<<c<<endl;

    c = a-b;
    cout<<"Sub= "<<c<<endl;

    c = a*b;
    cout<<"Mul= "<<c<<endl;

    c=(float)a/b;
    cout<<"Div= "<<c<<endl;

    c=a%b;
    cout<<"Mod= "<<c<<endl;

    return 0;
}

#include <iostream>
using  namespace std;

int global =100;

void display (){

    cout << global << endl;
}

int main(){
    int a=10;
    int b=50;
    int global=200;
    global=300;
    bool is_true=false;
    char c='A';
    cout << "the value of a and b is: "<<a << "and" << b << global << endl;
    cout << "the value of is_true is: " << is_true << endl;
    cout << "the value of c is: " << c << endl;
    display();
}
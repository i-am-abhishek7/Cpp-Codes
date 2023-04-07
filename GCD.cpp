#include<iostream>
using namespace std;

int main(){

    int a = 1071;
    int b = 462;

    int r;

    do{
        r = a%b;
        a = b;
        b = r;
    }
    while(b!= 0);

    cout<<a;
}
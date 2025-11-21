#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

float division(int a, int b){
    return a/b;
}

int main(){
    char ch;
    int a,b;
    cout<<"Enter the Expression: ";
    cin>>a>>ch>>b;
    switch(ch){
        case '+': cout<<add(a,b);
            break;
        case '-': cout<<sub(a,b);
            break;
        case '*': cout<<mul(a,b);
            break;
        case '/': cout<<division(a,b);
            break;
    }
}
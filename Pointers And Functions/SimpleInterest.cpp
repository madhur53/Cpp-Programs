#include <iostream>
using namespace std;

float simpleInterest(int principal,int rate_of_Interest,int time){
    return (principal*rate_of_Interest*time)/100;
}

int main(){
    cout<<simpleInterest(1000,5,1);
}
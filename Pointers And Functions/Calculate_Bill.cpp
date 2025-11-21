#include <iostream>
using namespace std;

int calculateBill(int units){
    int amount=0;
    if(units>0){
        if(units<=100){
            amount += units*3;
            units=0;
        } else{
        amount += 100*3;
        units -= 100;
        }
    }

    if(units>0){
        if(units<=100){
            amount += units*4.5;
            units=0;
        } else{
        amount += 100*4.5;
        units -= 100;
        }
    }

    if(units>0){
        amount += units*6;        
    }

    int fixed_charge=100;
    return fixed_charge+amount;
    
}

int main(){
    cout<<calculateBill(120);
}
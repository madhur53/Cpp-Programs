#include <iostream>
using namespace std;

int arr[5] = {0};
int index=0;
int balance = 5000;

int check_Index(){
    if(index>5){
        for(int i=0;i<4;i++){
            arr[i]=arr[i+1];
        }
        index=5;
    }
    return index;
}

int checkBalance(){
    // index=check_Index();
    // arr[index++]=balance;
    return balance;
}

int deposit(int amount){
    balance+=amount;
    index=check_Index();
    arr[index++]=amount;
    return +amount;
}

void withdraw(int amount){
    if(balance<amount){
        cout<<"Insufficient Balance";
    }
    else{
        balance-=amount;
        index=check_Index();
        arr[index++]=amount;
    }
}

void miniStatement(){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    checkBalance();
    deposit(3000);
    deposit(3000);
    withdraw(1000);
    deposit(100000);
    withdraw(50000);
    withdraw(10000);
    miniStatement();
    cout<<"\nbalance "<<balance;
}

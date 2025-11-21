#include <iostream>
using namespace std;

void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
}

// void swap(int *a, int *b){
//     *a=*b;
//     *b=*a;
// }

int main(){
    int a = 2;
    int b = 3;
    swap(a,b);

    cout<<a<<" "<<b;
}
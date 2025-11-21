#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    

    unordered_map<int,int> my_map;
    while(n!=0){
        my_map[n%10]++;
        n/=10;
    }

    for (const auto& pair : my_map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }


}

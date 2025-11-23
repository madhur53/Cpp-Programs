#include <iostream>
#include <vector>
using namespace std;


 int matrix_Addition(vector<vector<int>>& arr, vector<vector<int>>& arr1, vector<vector<int>>& arr2){
    int sum=0;

    if(arr.size() != arr1.size() || arr[0].size() != arr1[0].size()){
        cout<<"Invalid Input\n";
        return -1;
    }

    int row = arr.size();
    int col = arr[0].size();

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum+=arr[i][j] + arr1[i][j];
            arr2[i][j]=arr[i][j] + arr1[i][j];
        }
    }


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }


    return sum;
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<vector<int>> arr1 = {{17,18,19,20},{21,22,23,24},{25,26,27,28},{29,30,31,32}};

    vector<vector<int>> arr2(arr.size(), vector<int>(arr[0].size(),0));
    
    cout<<"Sum is: "<<matrix_Addition(arr,arr1,arr2)<<"\n";
}
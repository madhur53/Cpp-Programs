#include <iostream>
#include <vector>
using namespace std;

void matrix_Multiplication(vector<vector<int>>& m1, vector<vector<int>>& m2, vector<vector<int>>& result){
    int row1 = m1.size();
    int col1 = m1[0].size();
    int row2 = m2.size();
    int col2 = m2[0].size();

    if(col1 != row2){
        cout<<"Invalid input";
        return;
    }


    //Matrix Multiplication
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            for(int k=0; k<col1; k++){
                result[i][j] = result[i][j] + m1[i][k]*m2[k][j];
            }
        }
    }

    //Printing Resulting Matrix
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main(){
    vector<vector<int>> m1 = {{1,2,3,4},
                               {5,6,7,8}};
    vector<vector<int>> m2 = {{1,2,3},
                              {5,6,7},
                              {8,9,10},
                              {11,12,13}};

    //vector<vector<int>> result;

    vector<vector<int>> result(m1.size(), vector<int>(m2[0].size(), 0)); //size should be row1*col2

    matrix_Multiplication(m1,m2,result);
}


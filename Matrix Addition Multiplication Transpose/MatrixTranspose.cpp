#include <iostream>
#include <vector>
using namespace std;

void MatrixTranspose(vector<vector<int>>& matrix, vector<vector<int>>& matrixTranspose){
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            matrixTranspose[j][i] = matrix[i][j];
        }
    }

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<matrixTranspose[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},
                               {5,6,7,8}};

    //matrixTranspose size should be col*row where matrix size is row*col;
    vector<vector<int>> matrixTranspose(matrix[0].size(), vector<int>(matrix.size(), 0));

    MatrixTranspose(matrix,matrixTranspose);
}
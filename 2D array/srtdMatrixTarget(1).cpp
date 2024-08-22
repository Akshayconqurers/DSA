#include<iostream>
using namespace std;

bool searchinMatrix(int mat[4][4], int target){

    for(int i=0; i<4; ++i){
        for(int j =0 ; j < 4; ++j){
            
            if (mat[i][j] == target ){

                cout << "Element found at position : "<< "(" << i << "," << j << ")" <<endl;
                return true;
            }
        }
    }
    cout << "Element not found" <<endl;
    return false;

}

int main(){

    int mat[4][4] = {{1,3,4,6},
                     {8,9,10,12},
                     {14,15,17,29},
                     {30,34,45,55}};

    int target;
    cout << "Enter the target :"<<endl;
    cin >> target;

    searchinMatrix(mat, target);

    return 0;
}

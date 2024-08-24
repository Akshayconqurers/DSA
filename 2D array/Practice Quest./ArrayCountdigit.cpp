/*Print the number of all 7’s that are in the 2d array.
Example:Input-int arr[][]= {{4,7,8},{8,8,7}};
n=2,m=3 */


#include<iostream>
using namespace std;

int main(){
    int arr[2][3]={{4,7,8},
                   {8, 8, 7}};
                   
    int i=2;
    int j=3; 
    int count=0;

for (int i=0; i<2; i++){
    for (int j=0; j<3; j++){
        if (arr[i][j] == 7){
            count ++;
            
        }
    }
}
                   
    cout << "The number of times 7 present in the array is = "<< count ;
                   
    return 0;
}

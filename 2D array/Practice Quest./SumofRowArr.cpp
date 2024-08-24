/*  Print out the sum of the numbers in the second row of the “arr” array*/

#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{1,4,9},
                   {11, 4, 3},
                    {2,2,3}};
                    
    int i=3;
    int j=3;
    int sum=0;
    
    for (j=0; j<3; j++){
        sum += arr[1][j];
    }
    
    cout<< "The Sum is ="<< sum <<endl;
    return 0;
                   
    
}

#include<iostream>
using namespace std;

int main(){

    int eng;
    int hind;
    int math;

    cout<<"Enter English marks : ";
    cin>>eng;

    cout<<"Enter Hindi marks : ";
    cin>>hind;

    cout<<"Enter Math marks : ";
    cin>>math;
    
    int AVG = (eng+hind+math)/3;

    cout<<"The average of all marks is : "<<AVG<<endl;

    return 0;
    
  

}
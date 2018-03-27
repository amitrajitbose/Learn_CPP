#include<iostream>

#define PI 3.142 //this is a macro

using namespace std;
int main(){
    
    
    const float pi = 3.14;
    int x=5;
    x=10;
    const int y = 15; //this line gives an error
    //y=20; //modifying constant gives an error
    //const int z; //uninitialised gives errors
    
    
    float r;
    cout<<"Enter circle radius: "<<endl;
    cin>>r;
    float area=PI * r* r;
    cout<<"Area: "<<area;
    
    cin.get();
    cin.get();
    return 0;
}

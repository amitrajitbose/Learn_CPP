#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Integer: ";
    int n;
    cin>>n;
    int sq=n*n;
    cout<<sq<<std::endl; //Method-1
    cout<<n*n; //Method-2 (Directly)
    cin.get();
    cin.get();
    //Why did I include two lines of cin.get() ?
    //Visit this link and read it
    //https://stackoverflow.com/questions/3780255/cin-get-not-working
    return 0;
}

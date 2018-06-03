#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> v;
	for(int i=1;i<=9;i++){
		v.push_back(i);
	}
	for(int i=0;i<9;i++){
		cout<<v[i]<<endl;
	}
	cout<<"Size:"<<v.size()<<endl;
	cout<<"Cap: "<<v.capacity()<<endl;
	cout<<"Max Size:"<<v.max_size()<<endl;
	
	if(v.empty())
	cout<<"Vector Empty"<<endl;
	else
	cout<<"Vector Not Empty"<<endl;
	
	cout<<"First Element: "<<v.front()<<endl;
	cout<<"Second Element: "<<v.at(1)<<endl;
	cout<<"First Element: "<<v.at(0)<<endl;
	cout<<"Last Element: "<<v.back()<<endl;
	
	cin.get();
	return 0;
}

//conditional loop homework

#include<iostream>
using namespace std;
int main(){
	char data;
	cout<<"number or digit"<<endl;
	cin>>data;
	if(data>='A' && data<='Z'){
	cout<<"Upper";
}
	else if(data>='a' && data<='z'){
	cout<<"Lower";
}
	else if(data>='1' && data<='10'){
	cout<<"Digits";
}
    else{
    	cout<<"Wrong"<<endl;
	}
}

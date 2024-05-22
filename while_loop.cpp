//1-n range number

/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i = 1;
	while(i<=n)  //range
	{
		cout<<i<< " ";
		i = i+1;
	}
}*/

//sum of n number using while loop

/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i = 1;
	int sum = 0;
	while(i<=n){
		sum = sum + i;
		i = i+1;
		
	}
	cout<<"value of sum is: " <<sum<<endl;
}
*/
//sum of n even number (HW)
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i = 2;
	int sum = 0;
	while(i<=n){
		sum = sum + i;
		i = i+2;
		
	}
	cout<<"value of sum is: " <<sum<<endl;
}
*/
//ferenhite and celcius (HW)

/*
#include<iostream>
using namespace std;
int main(){
	int n, i = 2;
	cin>>n;
	
	while(i<n){
		if(n%i==0){
			cout<<"Not Prime for"<<i<<endl;
	    }
			else{
			
				cout<<"Not Prime"<<i<<endl;		
		}
		i = i+1;
	}
	
}
*/
//Patterns -----(1)

/*#include<iostream>
using namespace std;
int main(){
	//check for row and column
	//nth row --- col-row
	int n;
	cin>>n;
	7
	int i = 1;  //i-row
	while(i<=n){
		int j = 1;  //j- column
		while(j<=n){
			cout<<"*";
			j=j+1;
		}
		cout<<endl;
		i = i+1;
	}
}

*/
//Patterns -----(2)


#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 1;
	while(i<=n){
		int j = 0;
		while(j<=n){
			cout<<i;
			j=j+1;
		}
		cout<<endl;
		i = i+1;
	}
}




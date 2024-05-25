/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
     while(i<=n){
     int j = 1;
     while(j<=n){
        cout<<n-j+1;    //reverse of 1 2 3 --- 3 2 1(n-j+1)
        j = j+1;
     }
     cout<<endl;
     i = i + 1;
     }
}

*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
     while(i<=n){
     int j = 1;
     while(j<=n){
        cout<<count<<"  ";  //for space indentation
        count = count + 1;  //for increament in teh number like 1 2 3 with changes in i and j
        j = j+1;
     }
     cout<<endl;
     i = i + 1;
     }
}


#include<iostream>
using namespace std;
template <class T>
T add(T a,T b){
	return a+b;
}
int main(){
	int a=10,b=15;
	cout<<add(a,b)<<endl; 
	return 0;
}

#include<iostream>
using namespace std;
template <class T>
T add(T a,T b){
	return a+b;
}
template <class T>
T sub(T a,T b){
	return b-a;
}
int main(){
	int a=10,b=15;
	cout<<add(a,b)<<endl;
	cout<<sub(a,b)<<endl; 
	return 0;
}

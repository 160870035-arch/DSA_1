#include<iostream>
using namespace std;
void func(int num){
	if(num==6) //base case
	return;
	cout<<num<<" ";
	func(num+1);
}
int main(){
	func(1);
	return 0;
}

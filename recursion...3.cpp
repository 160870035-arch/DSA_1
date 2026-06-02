#include<iostream>
using namespace std;
void func(int num){
	if(num==0) //base case
	return;
	cout<<num<<" ";
	func(num-1);
}
int main(){
	func(5);
	return 0;
}

#include<iostream>
using namespace std;
int func(int num)
{
	static int sum=0;
	if(num==0)
	return sum;
	sum+=num;
	func(num-1);
}
int main()
{
	cout<<func(6);
	return 0;
}
	



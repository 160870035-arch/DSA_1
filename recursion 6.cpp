#include<iostream>
using namespace std;
int func(int arr[], int s, int e)
{
	static int sum=0;
	if(s==e)
	return sum;
	sum +=arr[s];
	func(arr,s+1,e);
}
int main()
{
	int arr[6]={12,14,22,84,11,19}
	cout<<fun(arr, 0, 6);
	return 0;
}


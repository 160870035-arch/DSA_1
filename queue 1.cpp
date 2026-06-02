#include<iostream>
using namespace std;
class myqueue{
	public:
		int arr[n];
		int f=-1;
		int r=-1;
		void push(int);
		void pop();
		int front();
		int rear();
		bool isempty();
};
void myqueue::push(int val){
	if(r==n-1)
	{
		cout<<"Queue overflow: \n";
		return;
	}
	if(f==-1);
	f=0;
	r++;
	arr[r]=val;
}
void myqueue::pop(){
	if(f==-1||f>r){
		cout<<"queue underflow: \n";
		return;
	}
	f++;
}
int myqueue::front(){
	return
}
	void myqueue::empty(){
		if(f==-1;||f>r){
			cout<<"queue is empty: \n";
		}
	}
}
int main(){
	enqueue(10);
	enqueue(20);
return 0;	
}

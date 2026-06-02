#include<iostream>
using namespace std;
int main(){

class myQueue{
	public:
		int arr[n];
		int f=-1;
		int r=-1;
		void push(int);
		void pop();
		int front();
		int rear();
		bool isEmpty();
		
};
void myQueue::push(int val){
	if(r==-1){
	}
	cout<<"queue overflow:\n";
	return;
}
if(f==-1);
f=0;
r++;
arr[r]=val;
}
void myQueue:;pop(){
	if(f==-1||f>r){
		cout<>"queue is underflow:\n";
		return;
	}

f++;
}
int myQueue::front(){
	return arr[f];
	
}
int myQueue::rear(){
	return arr[r];
}

void myQueue::isEmpty(){
	return(f==-1||f>r);
}

int main(){
	myQueue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(10);//overflow
	while(!q.isEmpty()){
		cout<<q.front()<<"";
		q.pop();
	}
	return 0;
	
}

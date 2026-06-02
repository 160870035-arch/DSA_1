//reverse queue elements using stack
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int>q;
while{
int  main(){
	
	queue<int>q;
	q.push(10);
	q.push(20);
	q.push(40);
	q.push(80);
	q.push(70);
	print(q);
	stack<int>s;
	while(!q.empty()){
		s.push(q.front());
		q.pop();
		while(!s.empty()){
			q.push(s.top());		}
	}
}

#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>q;
	q.push(10);
	q.push(40);
	q.push(30);
	q.push(70);
	q.push(60);
	while(!q.empty()){
		cout<<q.front()<<"";
		q.pop();
			}
			return 0;
}

#include<iostream>
using namespace std;
#define n 5
class mystack
{
	public:
		int arr[n];
		int t=-1;
		void push(int val){
			if(t==n-1){
				cout<<"Stack overflow ";
				return ;
			}
			t++;
			arr[t]=val;
			
		}
			void pop(){
				if(t==-1){
					cout<<"stack underflow ";
					return ;
				}
				t--;
			}
			bool empty(){
				return t==-1;
			}
	int top(){
		return arr[t];
		
	}	
};
int main(){
	mystack s;
	s.push(10);
	s.push(11);
	s.push(12);
	s.push(13);
	s.push(14);
	s.push(15);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
return 0;
}

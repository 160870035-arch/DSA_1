#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list* next;
		list(int val){
			data=val;
			next=NULL;
		}
		list(){
			next=NULL;
		}
};
int main(){
	list* n1=new list(10);
	//Implement a function to insert node at the tail of a linked list
	insertAtTail(n1);
	print(n1);
	return 0;
}

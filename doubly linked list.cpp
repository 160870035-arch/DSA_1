#include<iostream>
using namespace std;
class dlist{
	public:
		int data;
		dlist*prev;
		dlist*next;
		dlist(int val){
			data=val;
			prev=NULL;
			next=NULL;
		}
};
int main()
{
	dlist*n1= nextlist(11);
	dlist*n2= nextlist(12);
	dlist*n3= nextlist(13);
	dlist*n4= nextlist(14);
	dlist*n5= nextlist(15);
	n1->next=n2;
	n2->prev=n1;
	n2->next=n3;
	n3->prev=n2;
	n3->next=n4;
	n4->prev=n3;
	n4->next=n5;
	n5->prev=n4;
	n5->next=NULL;
}
return 0;
}

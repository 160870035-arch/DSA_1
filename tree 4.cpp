#include<iostream>
using namespace std;
class tree{
	public:
		int data;
		tree* left;
		tree*right;
		
		tree(int val){
			data=val;
			left=right=NULL;
		}
};
void insert(tree* &root){
	cout<<"Enter data ";
	int val;
	cin>>val;
	root=new tree(val);
	if(val==-1)
	return;
	cout<<"Enter data fo inserting in left of tree: "<<val<<endl;
	root->left=insert(root->left);
	cout<<"Enter data fo inserting in right of tree: "<<val<<endl;
	root->right=insert(root->right);
	return root;
}
void in_order(tree* root){
	if(root==NULL)
	return;
in_order(root->NULL);
cout<<root->data<<" ";
in_order(root->right);
}
int main(){
	tree* root=NULL;
	insert(root);
	in_order(root);
	return 0;
}

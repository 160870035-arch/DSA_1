//problem1:
//sample input:Hello! how are you?
//sample output;?
#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<char>ans;
	string str="Hello!How are you?";
	for(int i=0; i<str.length();i++){
		ans.push(str[i]);
	}
	while(!ans.empty()){
		cout<<ans.top();
		ans.pop();
	}
	return 0;
}



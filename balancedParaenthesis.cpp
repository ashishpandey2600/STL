#include<bits/stdc++.h>
using namespace std;
//stacks- LIFO last in first out
unordered_map<char,int> symbols={{'[',-1},{']',1},{'{',-2},{'}',2},{'(',-3},{')',3}};
string isBlanced(string s){
 stack<char> st;
 for(char bracket:s)
 {
 	if(symbols[bracket]<0)
 	{
 		st.push(bracket);
 	}else{
 		if(st.empty()) return "NO";
 		char top =  st.top();
 		st.pop();
 		if(symbols[top]+symbols[bracket] !=0)
 		{
 			return "NO";
 		}
 	}
 }
if(st.empty()) return "YES";
return "NO";
}
int main()
{ //balanced paraenthesis

	int t;
	cin>> t;
	while(t--)
	{
		string s;
		cin>> s;
		cout<<isBlanced(s)<<endl;
	}
   
}
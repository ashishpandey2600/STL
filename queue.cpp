#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<string> q;
	q.push("abc");
	q.push("DEF");
	q.push("GHI");
	q.push("jkl");
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
}
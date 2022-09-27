#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n; // no.of elements in vector.
	vector<int > v;
	for(int i=0;i<n; ++i)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	//All ways to iterate vectors and print their values

    // 1. Use a for loop and reference pointer.

    for(int i=0;i<v.size();++i)
    {
    	cout<<v.at(i)<<" "; // we can also use :-  v[i];
    }
    cout<<endl;

    // 2. Use an iterator
	for(vector<int> :: iterator it= v.begin(); it<v.end(); ++it)
	{
		cout<<*it<<" ";
	}
    cout<<endl;

    // 3. Use of auto keyword.
	for(auto &value : v)
	{
		cout<<value<<" ";
	}
	cout<<endl;
	// In place of auto key word, we can use present datatype keyword.
	// & (ampersand) is used to avoid the copies of vector which take extra space.
}
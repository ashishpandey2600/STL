#include<bits/stdc++.h>
using namespace std;
void printset(set<int> &m) //passing by refrence to avoid copies.
{ 

	for(auto &value : m)
	{
		cout<<value<<" ";
	}
	cout<<endl;
}
void printset2(unordered_set<int> &m2)
{
	for(auto &value :m2)
	{
		cout<<value<<" ";
	}
	cout<<endl;
}
void printset3(multiset<int> &m3)
{
	for(auto &value : m3)
	{
		cout<<value<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;

	//1. Set
    // Ordered and Unique elements.
	set<int> m; // Duplicate elements are NOT allowed in set.

	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		m.insert(x);
	}
	printset(m);

	//2. Unordered_set
	//Unordered and Uniques elements.
	unordered_set<int> m2;

	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		m2.insert(x);
	}
	printset2(m2);

	//3. multiset
	//Ordered and Duplicates.
	multiset<int> m3;
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		m3.insert(x);
	}
	printset3(m3);
}
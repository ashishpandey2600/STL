#include<bits/stdc++.h>
using namespace std;

//Map is Key Value pair.

int main()
{
	int n;
	cin>>n; // no. of elements in map.

	map<int, string> m; 
	// when Unordered map is used, indexing is unordered (not sorted); 
	// Printed in same way as entered.

	// m[0]="masala Dosa";
	// cout<<m[0]<<endl;
	// m[key]="value"

	for(int i=0;i<n;++i)
	{
		int x;
		string y;
		cin>>x>>y;
		m.insert({x,y});
	}
	for(auto &value: m)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}
	cout<<endl;

	/*
			map<int ,string< m; 
			// Used in questions, like print the strings in Lexographical Order

	    1. Increasing order.
	    2. Self Balancing BST (Implemented by Red Black tree).
	    3. Search time is O(log n ).
	    4. Insertion time is O(log n ) + Rebalance.
	    5. Deletion time O(log n) + Rebalance.
	*/

	/*
		 unordered_map<int, string> m;
		 // Used in question, When order is not important.

		 1. NO ordering.
		 2. Implementation by Hash Table.
		 3. Search time is O(1) in Average case and O(n) in Worst case.
		 4. Insertion and deletion time is same as searching time.

	*/


	//How to find a value by key ?
	map<int , string> :: iterator it; //we can use also use auto keyword.
	it=m.find(3); //This function is of O(log n) time complexity.
	if(it==m.end())
	{
		cout<<"Value not found !!"<<endl;
	}
	else
		cout<<(*it).first<<" "<<(*it).second<<endl;

	//when iterator does not find the key; It simplily returns the end pointer;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//auto keyword is in use after c++11.
	//auto keyword and replace any datatype.

	//Using auto keyword in place of int datatype.
	auto val = 1;
	cout<<val<<endl;

	//Using auto keyword in place of float/double datatype.
	auto val2 = 1.432;
	cout<<val2<<endl;

	//Using auto keyword in place of char datatype.
	auto val3 = 'A';
	cout<< val3 <<endl;

	//Using auto keyword in place of string datatype.
	auto val4 = "I am good programmer.";
	cout<<val4<<endl;

	//We can use this datatype in loops also.

	// Using auto keyword to print vector.
	vector<int> v = {1,2,3,4,5};

	for(auto &value : v)
	{
		cout<<value<<" ";
	}
	cout<<endl;
    
    //Using auto keyword to print pair.

    // What is pair ? cin>>p.first<<p.second; Wrong way of taking inputs

    /*  pair<int,string > p;
		int x;
		string y;
		cin>>x;
		cin>>y;
		cout<<x<<y<<endl;
		p=make_pair(x,y);
		cout<<p.first<<" "<<p.second<<endl;
		cout<<endl;
	*/


	vector<pair<int , string> > v2;
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		int x;
		string y;
		cin>>x>>y;
		v2.push_back({x,y});
	}
	for(auto &value : v2)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}

	


}
#include<bits/stdc++.h>
using namespace std;
void printvect(vector<int> &v)
{
	for(auto &value : v)
	{
		cout<<value<<" ";
	}
	cout<<endl;
}
int main()
{

	int n;
	cin>>n;

	vector<vector<int> > v;

	for(int i=0;i<n;++i)
	{
		vector<int > temp;
		for(int j=0;j<n;++j)
		{
			int x;
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}

	// for(auto &value : v) //Not work
	// {
	// 	cout<<v[value];
	// }

	for(int i=0;i<v.size();++i)
	{
		printvect(v[i]);
	}

}
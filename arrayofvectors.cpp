#include<bits/stdc++.h>
using namespace std;

// print function for vector
void printVec(vector <int > &v)
{
	for(int i=0;i<v.size();++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	//Arrays of vectors
	int N; // This is size of vector
	cin>>N;
	vector<int > v[N]; // Array of Vector size N
	for(int i=0;i<N;++i)
	{
		int n;
		cin>>n;// Size of array in each vector
		for(int j=0;j<n;++j)
		{
			int x;
			cin>>x; // inserting element of array
			v[i].push_back(x);
		}
	}
     for(int i=0;i<N;++i) //calling every vector of array
     {
     	printVec(v[i]);
     }

}

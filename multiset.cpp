// Multiset
// uses Red black tree
// all operations are converted to O(log n)
// allows insert multiple values in set 
// allows duplicates
//Ordered but allow duplicates
#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> s)
{
	for(auto value : s)
	{
		cout<<value<<endl;
	}
}

int main()
{
  multiset<string> s;
  s.insert("abc"); //O(log n )
  s.insert("zsfd");
  s.insert("bsd");
  s.insert("ash");
  s.insert("ash");
  auto it = s.find("abc");//O(log n )
  // find function find the value , which is inserted first
  // if duplicates are not present.
  if(it != s.end()){ // this erases the value which iterator was pointing
  	s.erase(it); //use this ONLY
  }
   s.erase("bsd");// this erases all values of given value
   print(s);
}
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{ 
	if(a%b==0) //if(b==0) return a;
	{
		return b;

	}

 return gcd(b,a%b);

}

int main()
{
	// GCD
	//Formula for relation between GCD and LCM
	// (a x b)/GCD = LCM
	//Euclid Algorithm - Long divsion - HCF or GCD
    // Obtain remiendir
    // now Rimender ir Divisor
    // and Divisor is Divident

    cout<<gcd(4,12)<<endl; //Time complexity O(log n) in Worst case
    cout<<gcd(3,4)<<endl;
    cout<< 12 * 18 /gcd(12,18)<<endl;
    cout<<__gcd(12,18)<<endl;
}
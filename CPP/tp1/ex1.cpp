#include<bits/stdc++.h>
using namespace std ;


int main () {


	int a,b ;
	int *ap = &a, *bp = &b; 
	cout << "Enter a " <<endl;
	cin >> *ap; 
	cout << "Enter B " << endl;
	cin >> *bp ; 
	int sum ; 
	int *sumP = &sum; 
	*sumP = *ap + *bp;
	cout << "The sum is : " << *sumP << endl;
	return 0 ;
}

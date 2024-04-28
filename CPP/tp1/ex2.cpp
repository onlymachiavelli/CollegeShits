#include <bits/stdc++.h>
using namespace std;


int main (){

	char a, b ; 
	char *aP = &a , *bP = &b;	
	
	cout << "Enter the a character" << endl ;
	cin >> *aP ; 
	cout << "Enter the B character" << endl;
	cin >> *bP;
	char tmp ; 
	char *tmpP = &tmp ;
	*tmpP = *aP ; 
	*aP = *bP ; 
	*bP = *tmpP;
	cout << "A  becamse : " << *aP << " And B became : " << *bP ;
	 
	 return 0; 
}

#include<iostream>
using namespace std;
int main()
{
	// Modifiactions in a string 
	string st="string\nBhanu\n";
	cout<<st;
	st[0]='D';
	cout<<"Printing the length of the string\n";
	cout<<st.length()<<"\n";
	// Find function ==>where that substring is located takes two parameters 1."Substring" 2.where u need to start searching
	cout<<"Print Find Function output\n";
	cout<<st.find("Bhanu",0)<<"\n";
	//Taking substring (two parameters 1.where the index should start 2:upto where u want to print
	cout<<"Printing subsrrings\n";
	string sub=st.substr(7,5);
	cout<<sub;
}

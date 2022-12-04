// referance material: https://cplusplus.com/reference/vector/vector/?kw=vector 


#include<iostream>

//header file to use vector
#include<vector>

using namespace std;

int main()
{
	//initialize a vector
	//vector of int --> vector<int> (it can be any type.)
	vector<int> v;

	//to get the size of a vector
	cout << "Size of a vector: " << v.size() << endl;
	
	//incert a variable from the back
	v.push_back(5);


	cout << "Size of a vector: " << v.size() << endl;
	v.push_back(1);
	v.push_back(9);

	//to print vector elements
	for(int i =0; i<v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	//to remove an element from the back
	v.pop_back();


	for(int i =0; i<v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	//to chech does vector is empty or not?	
	// case 1) use v.size()==0 means empty
	// case 2) use v.empty() it returns bool: 1 when vector is empty ; 0 when vector is not empty
	cout << "Vector is empty? ANS: " << v.empty() << endl;

	//to read last element of a vector
	cout << "Last element: " << v.back() << endl;


	/////////////////////////////////////////////////////////////////////
	
	//initialize a vector with fixed size
	//vector<int> v1(Size,intial value)
	vector<int> v1(40,4);

	cout<<"initialization v1: ";
	//here auto datatype will select the datatype automaticaly 
	//a:v1 (a belogs to v1)
	//so this will print out each elements oneby one
	for(auto a:v1) cout << a << " ";
	cout << endl;

	//even after defining the size we can push_back an element and that will increase its size.
	v1.push_back(5);
	cout<<"v1: ";
	for(auto a:v1) cout << a << " ";
	cout<<endl;

}

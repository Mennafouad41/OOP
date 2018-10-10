#include <iostream>
#include<string>
using namespace std;
string *addentry(string* p1,int size1,string name)
{
	// create a new dynamic array larger than dynamicArray
	string*p2=new string[size1+1];
	// copy all elements from dynamicArray into new array
	for(int i=0;i<size1;i++)
		p2[i]=p1[i];
	// add the new entry onto the end of the new array
	p2[size1]=name;
    // delete dynamicArray
    delete[]p1;
	return p2;
}
string *deleteentry(string* p1,int size1,string delname)
{
	// create a new dynamic array Less than dynamicArray
	string*p2=new string[size1-1];
	// copy all elements from dynamicArray into new array
	for(int i=0;i<size1-1;i++)
		p2[i]=p1[i];
	// delete dynamicArray
	delete[]p1;
	return p2;
}
int main()
{
	// create a dynamic array of five strings
	string *p=new string[5];
	// Store 5 names in a dynamic array
	p[0]="menna";
	p[1]="mona";
	p[2]="malak";
	p[3]="marwa";
	p[4]="walaa";
	// Testing the addEntry function
	cout<<"when using addentery"<<endl;
	p=addentry(p,5,"mohamed");
	for(int i = 0; i <=5; ++i) cout << "Element " << i+1 << " is " << p[i] << endl;
	cout<<"------------------------------------"<<endl;
	// Testing the DeleteEntry function
	cout<<"when using deleteentery"<<endl;
	p=deleteentry(p,5,"");
	for(int i = 0; i <4; ++i) cout << "Element " << i+1 << " is " << p[i] << endl;
	return 0;

}







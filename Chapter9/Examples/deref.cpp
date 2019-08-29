#include<iostream>
using namespace std;

int main(){
	/*code*/
	
	int a = 1;
	int* p;
	int* q;

	p = &a;
	q = &a;
	cout << *p << "\t" << ++*q << endl;
	cout << *q << endl;
	return 0;
}

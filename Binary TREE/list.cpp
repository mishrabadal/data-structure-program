// CPP program to illustrate
// pop_front() function
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> mylist{ 1, 2, 3, 4, 5 };
    cout<<mylist.front()<<endl;
	mylist.pop_front();

	// list becomes 2, 3, 4, 5

	cout<<mylist.front();
	return 0;
}

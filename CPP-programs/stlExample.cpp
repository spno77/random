#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void showList(list<int> listo){

	list<int>::iterator it;

	for(it = listo.begin(); it != listo.end(); ++it){
		cout << ' ' << *it;
	}
	cout << endl;
}

int main(void)
{

	list<int> list1,list2;

	for (int i = 0; i < 10; i++){
		list1.push_back(i*2);
		list2.push_front(i+6);	
	}

	cout << "list1 is : " << endl;
	showList(list1);

	
	cout << "list2 is : " << endl;	
	showList(list2);

	list1.reverse();
	cout << "reversed list1 is :" << endl;
	showList(list1);

	list2.sort();
	cout << "sorted list2 is: " << endl;
	showList(list2);
	

	return 0;
}

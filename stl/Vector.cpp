#include <iostream>
#include <vector>
using namespace std;

class Vector{
	protected :
	vector<int> vec;

	public :
	void insert(int no){
		int i = 0;
		if(no < 0){
			return;
		}

		for(i = 0;i < no;i++){
			vec.push_back(i);
		}
	}

	void insertFirst(int no){
		auto begin = vec.begin();
		vec.emplace(begin,no);
	}

	void insertLast(int no){
		auto end = vec.end();
		vec.emplace(end,no);
	}

	void insertAtPos(int no,int pos){
		auto begin = vec.begin();
		if((pos > vec.size()+ 1) &&(pos < 0)){
			return;
		}
		vec.emplace(begin+pos,no);
	}

	void displayWithoutIterator(){
		int i = 0;
		cout<<"Elements in the vector using simple for loop\t:";
		for(i = 0;i < 5;i++){
			cout<<vec[i]<<"\t";
		}
		cout<<"\n";
	}

	void displayWithIterator(){
		vector<int>::iterator v = vec.begin();
		cout<<"Elements in the vector using iterator\t:";
		while(v != vec.end())
		{
			cout<<*v<<"\t";
			v++;
		}
		cout<<"\n";
	}

	void displayWithIteratorX(){
		cout<<"Elements in the vector using iterator rbegin and rend\t:";
		auto v = vec.rbegin();
		while(v != vec.rend()){
			cout<<*v<<"\t";
			v++;
		}
		cout<<"\n";
	}

	void displayWithIteratorXX(){
		cout<<"Elements in the vector using iterator cbegin and cend\t:";
		for(auto it = vec.cbegin();it != vec.cend();it++){
			cout<<*it<<"\t";
		}
		cout<<"\n";
	}

	void displayWithIteratorXXX(){
		
		cout<<"Elements in the vector using iterator crbegin and crend\t:";
		for(auto it = vec.crbegin();it != vec.crend();it++){
			cout<<*it<<"\t";
		}
		cout<<"\n";
	}

	void sizeOfVector(){
		cout<<"size of Vector is \t"<<vec.size()<<"\n";
	}

	void capacityOfVector(){
		cout<<"capacity Of Vector is \t"<<vec.capacity()<<"\n";
	}

	void maxsizeOfVector(){
		cout<<"max size Of Vector is \t"<<vec.max_size()<<"\n";
	}

	void isEmpty(){
		if(vec.empty()){
			cout<<"Vector is empty\n";
		}
		else{
			cout<<"Vector is not empty\n";
		}
	}

	void accessElement(int pos){
		if(pos == 0){
			cout<<"Element is\t"<<vec.front()<<"\n";
		}
		else if(pos == (vec.size()-1)){
			cout<<"Element is\t"<<vec.back()<<"\n";
		}
		cout<<"Element at vec[pos]\t"<<vec[pos]<<"\n";
		cout<<"Element at at(pos)\t"<<vec.at(pos)<<"\n";
	}

	void assignValue(int howMany,int value){
		vec.assign(howMany,value);
	}

	void removeValue(int pos){
		if(pos == 0){
			vec.erase(vec.begin());
		}
		else if(pos == (vec.size()-1)){
			vec.erase(vec.end());
		}
	}

	void swapVector(){
		vector<int> vec1;
		int i = 0;
		for(i = 30;i < 35;i++){
			vec1.push_back(i);
		}

		vec.swap(vec1);
	}
};

int main()
{
	Vector v;
	int ch = 0,ch1 = 0,n = 0;
	int no = 0,pos = 0;
	do{
		cout<<"\n1.Insert";
		cout<<"\n2.insertFirst";
		cout<<"\n3.insertLast";
		cout<<"\n4.insertAtPos";
		cout<<"\n5.display";
		cout<<"\n6.sizeofvector";
		cout<<"\n7.capacity of vector";
		cout<<"\n8.max size";
		cout<<"\n9.empty or not";
		cout<<"\n10.find value by position";
		cout<<"\n11.assign values";
		cout<<"\n12.remove Value by position";
		cout<<"\n13.swap\n";
		cout<<"\n14.Exit";
		cout<<"\nEnter your choice\n";
		cin>>ch;
		switch(ch){
			case 1:
			cout<<"\nHow many values in vector\t:";
			cin>>no;
			v.insert(no);
			break;

			case 2:
			cout<<"\nEnter value to insert at first position\n";
			cin>>no;
			v.insertFirst(no);
			break;

			case 3:
			cout<<"\nEnter value to insert at last position\n";
			cin>>no;
			v.insertLast(no);
			break;

			case 4:
			cout<<"\nEnter value to insert at position\n";
			cin>>no;
			cout<<"\nEnter position\n";
			cin>>pos;
			v.insertAtPos(no,pos);
			break;

			case 5:
			cout<<"\n1.displayWithoutIterator\n2.displayWithIterator\n";
			cin>>ch1;
			if(ch1 == 1){
				v.displayWithoutIterator();
			}
			else if(ch1 == 2){
				v.displayWithIterator();
			}
			else{
				cout<<"invalid";
			}
			break;

			case 6:
			v.sizeOfVector();
			break;

			case 7:
			v.capacityOfVector();
			break;

			case 8:
			v.maxsizeOfVector();
			break;

			case 9:
			v.isEmpty();
			break;

			case 10:
			cout<<"\nEnter position to find element\t";
			cin>>pos;
			v.accessElement(pos);
			break;

			case 11:
			cout<<"\nHow many values to insert in vector\t";
			cin>>no;
			cout<<"\nEnter number to enter\t";
			cin>>n;
			v.assignValue(no,n);
			break;

			case 12:
			cout<<"\nEnter position to remove element\t";
			cin>>pos;
			v.removeValue(pos);
			break;

			case 13:
			v.swapVector();
			break;

			case 14:
			cout<<"\nThank u for using\n";
			exit(0);
			break;

			default:
			cout<<"invalid choice";
			break;
		}
	}
	while(ch != 14);

	return 0;
}
//clist.h
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;


struct node
{
    int data;	//some questions are a char * data;
    node * next;
};

class clist
{
   public:
   		//These functions are already written
   		clist();			//supplied
   		~clist();		//supplied
   		void build();	//supplied
   		void display();	//supplied

	/* *****************YOUR TURN! ********************* */
	//Write your function prototype here:
  void buildMyList(int newData);
  void remove(node* current, node* previous, int number);
  int sum(node* current, int number);
  node* getRear();
  void copyValue(node* current, node* orear, node* copycurrent, int number);

	private:
		node * rear;
};

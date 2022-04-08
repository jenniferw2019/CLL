#include "clist.h"
#include <iostream>


int main()
{
    clist object;
    node* oRear;
    object.build();		//builds a circular LL
    object.display();	//displays the list

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    /*
    object.buildMyList(10);
    object.buildMyList(5);
    object.buildMyList(2);
    object.buildMyList(9);
    object.buildMyList(5);
    object.display();
    */
    

    oRear = object.getRear();
    //object.remove((rear->next), rear, 9);
    
    //int total = 0;
    //total = object.sum((rear->next), 0);
    //cout << "total " << total << endl;


    clist newList;
    node* head;
    newList.copyValue((oRear->next), oRear, head, 2);
    newList.display();
    //object.display(); //resulting list after your function call!
    
    return 0;
}

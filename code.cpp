#include "clist.h"

using namespace std;

void clist::buildMyList(int newData)
{
  node* newNode = new node();
  newNode->data = newData;
  
  node* current = rear;
  if (rear == NULL)
    {
      rear = newNode;
      rear->next = rear;
    }
  else
    {
      while (current->next != rear)
	{
	  current = current->next;
	}
      current->next = newNode;
      newNode->next = rear;
    }
}


void clist::remove(node* current, node* previous, int number)
{
  if (current != rear)
    {
      if ((current->data) > number)
	{
	  node* temp = current;
	  previous->next =  current->next;
	  current = current->next;
	  delete temp;
	  remove(current, previous, number);
	}
      else
	{
	  previous = current;
	  current = current->next;
	  remove(current, previous, number);
	}
    }
 else
   {
     if (current->data > number)
       {
	 node* temp = current;
	 rear = previous;
	 rear->next = current->next;
	 delete temp;
       }
   }
}



int clist::sum(node* current, int number)
{
  if (current != rear)
    {
      if ((current->data % 2) == 0)
	{
	  number = number + current->data;
	  current = current->next;
	  number = sum(current, number);
	}
      else
	{
	  current = current->next;
	  number = sum(current, number);
	}
    }
  else
    {
      if ((current->data % 2) == 0)
	{
	  number = number + current->data;
	}
      
    }
  
return number;
}

node* clist::getRear()
{
  return rear;
}

void clist::copyValue(node* current, node* orear, node* copycurrent, int number)
{
  if (current != orear)
    {
      if (current->data != number)
	{
	  if (rear == NULL)
	    {
	      node* newNode = new node();
	      newNode->data = current->data;
	      rear = newNode;
	      rear->next = rear;
	      copycurrent = rear;
	      current = current->next;
	      copyValue(current, orear, copycurrent, number);
	    }
	  else
	    {
	      node* newNode = new node();
	      newNode->data = current->data;
	      copycurrent->next = newNode;
	      copycurrent = copycurrent->next;
	      copycurrent->next = rear;
	      current = current->next;
	      copyValue(current, orear, copycurrent, number);
	    }
	}
      else
	{
	  current = current->next;
	  copyValue(current, orear, copycurrent, number);
	}
    }
  else
    {
      if (current->data != number)
	{
	  node* newNode = new node();
	  newNode->data = current->data;
	  copycurrent->next = newNode;
	  copycurrent = copycurrent->next;
	  copycurrent->next = rear;
	  rear = copycurrent;
	}
      else
	{
	  if (rear != NULL)
	    {
	      rear = copycurrent;
	    }
	}
    }
}

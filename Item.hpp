#include <iostream>
#include <vector>
#include <list>
#include <string.h>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <iterator>
#pragma once

using namespace std;

/*! Item is a class conformed by a integer item_id*/
/*!This class is focused to be an object with multiple uses*/
class item
{
	int item_id; 
public:
	 /**
   	   * Constructor by default
   	   * Creates an item type with parameter "integer item_id = 0"
   	   \param <none>
   	   \sa item(int s)
   	   */
	item(){
		item_id=0;
		
	}
	 /**
   	   * Constructor that depends on s integer
   	   * Creates an item type with a random integer between 0 and "s"
   	   \param s integer argument
	   \sa item()
   	   */
   	item(int s) 
	{	
		int n=(rand()%s);	
		item_id = n;
	}

	 /**
   	   * Method that depends on the id integer
   	   * Sets the item_id of an item type to the value id
   	   \param id integer argument
   	   */
	void Set_value(int id) 
	{
		item_id=id;
	
	}

	 /**
   	   * Method the get the value of the item_id
   	   * Get the data item_id of the item
   	   \return item item_id 
   	   */
	int get_value(){return item_id;}

	 //! Destructor
 	/*!
	   * Destroys the item type.
	   */
	~item(){}
};

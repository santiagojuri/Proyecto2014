#include "item.hpp"
#pragma once

/*! Item is a class conformed by a vector<item> and an integer*/
/*!This class is focused to be an object with multiple uses*/
class Question
{
	
	int level;
protected:
	vector<item> Objetos;

public:
	 /**
   	   * Constructor by default
   	   * Creates an item type with parameters in default value
   	   \param <none>
   	   \sa Question(int n, int s)
   	   */
	Question(){};
	 /**
   	   * Constructor 
   	   * Creates a Question type with two parameters integer, n is the size of the vector (amount of items) 
   	   of items and s is the range from 0 to s of  the random number which its generated a new item.
   	   \param n integer argument
   	   \param s integer argument
   	   \sa Question()
   	   */
	Question(int n,int s) 
	{
		srand(time(0));
		for(int i=0;i<n;i++)
		{
			item a(s);
			Objetos.push_back(a);
		}
	}

	 /**
   	   * Method that depends on the l integer
   	   * Sets the level of an item type to the value l
   	   \param l integer argument
   	   */
	void Set_level(int l){
		level = l;
	}
	 /**
   	   * Method that depends on the n integer
   	   * adds an item to de vector of items with a value of n
   	   \param n integer argument
   	   */
	void add_item(int n){ //agrega items a la pregunta
		item i;
		i.Set_value(n);
		Objetos.push_back(i);
	}
	/**
   	   * Method that get the attribute of the class; Objetos.
   	   * Return the vector<item> of objects
   	   \param <none> 
   	   \return vector<item> Objetos
   	   */
	vector<item> get_Object(){return Objetos;}
	 /**
   	   * Method that returns a vector<int> 
   	   * Transforms the vector<item> to a vector<int> 
   	   \param <none>
   	   \return vector<int> res
   	   */
	vector<int> Show_question_val()
	{
	vector<int> res;
    for(auto x: Objetos)
    	{
    		res.push_back(x.get_value());
    	}
    return res;
	}
	 //! Destructor
 	/*!
	   * Destroys the item type.
	   */
	~Question(){}; //destructor

};


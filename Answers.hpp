#include "item.hpp"
#pragma once


/*! Answer is a class conformed by a vector<int>*/
/*!This class is focused to be the answer of a 
question or the sellection is made by the user*/
class Answers
{
	vector<int> ans; /*!< Detailed description after the member */

public:
    /**
   	   * Constructor by default
   	   * Creates an Answers type with default parameters
   	   \para <none>
   	   \sa Answers(int n), Answers(int n,int s) 
   	   */
	Answers(){};

	/**
       * Constructor depending on an integer
       * Create an Answers type with  "n" integers where the user decides
       what value will get each integer. 
       \param n an integer argument
       \sa Answers(), Answers(int n,int s) 
       */
	Answers(int n)
	{
		for(int i=0;i<n;i++)
		{
			int t;
			cout << "ingrese el numero:" << i+1 <<endl;
			cin >> t;
  			ans.push_back(t);
		}
	}

	/**
       * Constructor depending on an integer
       * Create an Answers type with  "n" integers where each one 
       \param n an integer argument
       \param s an integer argument
       \sa Answers(), Answers(int n) 
       */
	Answers(int n,int s)
	{
		srand(time(0));
		for(int i=0;i<n;i++)
		{
			int a=(rand()%s+1);;
			ans.push_back(a);
		}
	}

	void add_ans(int i){ans.push_back(i);};

	vector<int> get_ans(){return ans;}

	 //! Destructor
	 /*!
   	   * Destroys the Answers type.
   	   */
	~Answers(){}; 


};

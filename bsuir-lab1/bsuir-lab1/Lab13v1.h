#include <iostream>
#include <math.h>

#pragma once
struct tstk
{
	int inf;
	tstk *a;
};

class Lab13v1
{
	private:
		tstk* sp;
	public:

		/**
		* Constructor
		**/
		Lab13v1();

		tstk* push(int inf);

		int pop();

		void clear();

		bool hasNext();

		void outputValues();

		/**
		* Destructor
		**/
		~Lab13v1();
		
};


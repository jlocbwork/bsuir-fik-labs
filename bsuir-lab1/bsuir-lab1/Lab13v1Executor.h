#include "Lab13v1.h"

#pragma once
class Lab13v1Executor
{
	private:

		Lab13v1* randomStack;
		Lab13v1* positiveStack;
		Lab13v1* negativeStack;

		void createRandomStack(int size);
		void createStacks(Lab13v1* stack);

	public:
		Lab13v1Executor();
		void execute();

		~Lab13v1Executor();
};


// bsuir-lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Lab13v1Executor.h"

#include "testClass.cpp"


int main()
{
	Lab13v1Executor* lab13v1Executor = new Lab13v1Executor();
	lab13v1Executor->execute();
	delete lab13v1Executor;



	// TestClass* testClass = new TestClass();
	TestClass testClass;
	testClass.execute();


}
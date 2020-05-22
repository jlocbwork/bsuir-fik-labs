#include <random>
#include "Lab13v1.h"

Lab13v1::Lab13v1()
{
	//stub constructor
	sp = NULL;
}

tstk* Lab13v1::push(int inf)
{
	tstk* spt = new tstk;
	spt->inf = inf;
	spt->a = sp;
	sp = spt;
	return spt;
}

int Lab13v1::pop()
{
	int inf = NULL;
	if (sp != NULL) 
	{
		tstk* spt = sp;
		inf = sp->inf;
		sp = sp->a;
		delete spt;
	}
	return inf;
}

void Lab13v1::clear()
{
	tstk* spt;
	while (sp != NULL)
	{
		spt = sp;
		sp = sp->a;
		delete spt;
	}
}

bool Lab13v1::hasNext()
{
	return (sp != NULL);
}

void Lab13v1::outputValues()
{
	std::cout << "stack values " << std::endl;
	tstk* spt = sp;
	while (spt != NULL)
	{
		std::cout << spt->inf << ' ';
		spt = spt->a;
	}
	std::cout << std::endl << std::endl;
}

Lab13v1::~Lab13v1()
{
	this->clear();
}

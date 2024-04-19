#include "ObjectTest.h"
#include <iostream>



ObjectTest::ObjectTest()
{
	std::cout << "생성" << std::endl;
}
ObjectTest::~ObjectTest()
{
	std::cout << "소멸" << std::endl;
}

void ObjectTest::print()
{
	std::cout << "WRYYYYYYYY" << std::endl;
}

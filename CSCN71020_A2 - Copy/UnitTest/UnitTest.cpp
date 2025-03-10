#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UNITTESTS)
	{
	public:
		
		TEST_METHOD(Test_getPerimeter)
		{
			int length = 8;
			int width = 3;
			int expectedvalue = 2 * (length + width);

			int actualvalue = getPerimeter(&length, &width);

			Assert::AreEqual(expectedvalue, actualvalue);
		}

		TEST_METHOD(Test_getArea)
		{
			int length = 6;
			int width = 3;
			int expectedvalue = length * width;

			int actualvalue = getArea(&length, &width);

			Assert::AreEqual(expectedvalue, actualvalue);
		}

		TEST_METHOD(Test_setLength_validInput)
		{
			int length = 5;
			int input = 75; 
			
			setLength(input, &length);  

			Assert::AreEqual(75, length); 
		}

		TEST_METHOD(Test_setLength_highRange) 
		{
			int length = 4;
			int input = 150;

			setLength(input, &length); 

			Assert::AreEqual(4, length);
		}

	};
}

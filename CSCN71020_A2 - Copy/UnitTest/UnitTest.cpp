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

		TEST_METHOD(Test_setLength_negativeValue)
		{
			int length = 5;
			int input = -5;

			setLength(input, &length);

			Assert::AreEqual(5, length);
		}

		TEST_METHOD(Test_setWidth_validInput)
		{
			int width = 7; 
			int input = 70;

			setWidth(input, &width); 

			Assert::AreEqual(70, width); 
		}

		TEST_METHOD(Test_setWidth_similar)
		{
			int width = 6;
			int input = 6;

			setWidth(input, &width);

			Assert::AreEqual(6, width);
		}
	};
}

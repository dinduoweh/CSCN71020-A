#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(testgetperimeter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int length = 8;
			int width = 3;
			int expectedvalue = 2 * (length + width);

			int actualvalue = getPerimeter(&length, &width);

			Assert::AreEqual(expectedvalue, actualvalue);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
extern "C" 
{
#include "../BCSRec/main.h"
}

int getPerimeter(int* length, int* width);
int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_Get_Perimeter)
		{
			int length = 15;
			int width = 20;

			int expectedvalue = 70;

			int result = getPerimeter(&length, &width);

			Assert::AreEqual(result, expectedvalue);
		}

		TEST_METHOD(TEST_GET_AREA) {
			int length = 15;
			int width = 20;

			int expectedvalue = 300;

			int result = getArea(&length, &width);
			Assert::AreEqual(result, expectedvalue);
		}
	};
}

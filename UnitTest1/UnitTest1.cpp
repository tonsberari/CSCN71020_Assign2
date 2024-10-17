#include "pch.h"
#include "CppUnitTest.h"
extern "C" 
{
#include "../BCSRec/main.h"
}

int getPerimeter(int* length, int* width);
int getArea(int* length, int* width);
void setLength(int input, int* length);
void setWidth(int input, int* width);

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

			int expectedperimeter = 70;

			int result = getPerimeter(&length, &width);

			Assert::AreEqual(result, expectedperimeter);
		}

		TEST_METHOD(TEST_GET_AREA) {
			int length = 15;
			int width = 20;

			int expectedvalue = 300;

			int result = getArea(&length, &width);
			Assert::AreEqual(result, expectedvalue);
		}
		TEST_METHOD(TestSetLenth_Valid) {
			int input = 20;
			int length = 0;

			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(TestSetLenth_Lower) {
			int input = 10;
			int length = -5;

			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(TestSetLenth_Higher) {
			int input = 30;
			int length = 105;

			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(TestSetWidth_Valid) {
			int input = 20;
			int width = 0;

			setLength(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(TestSetWidth_Lower) {
			int input = 30;
			int width = -5;

			setLength(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(TestSetWidth_Higher) {
			int input = 40;
			int width = 105;

			setLength(input, &width);
			Assert::AreEqual(input, width);
		}
	};
}

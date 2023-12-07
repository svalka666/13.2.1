#include "pch.h"
#include "CppUnitTest.h"
#include "../13.2.1/math_operations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(2, ADD(1, 1));
			Assert::AreEqual(4, MULTIPLY(2, 2));
			Assert::AreEqual(27, CUBE(3));
		}
	};
}

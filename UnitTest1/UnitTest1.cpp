#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int h;
			h = pow(0, 2) * sin(0) + pow(0, 2) * cos(0);
			Assert::AreEqual(h, 0);
		}
	};
}

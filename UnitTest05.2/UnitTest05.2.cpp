#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.2/lab05.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest052
{
	TEST_CLASS(UnitTest052)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g;
			g = A(2, 1, 2);      
			Assert::AreEqual(g, 8.00);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.1\Lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0,1,2,3,4,5,6,9 };
			int S = Sum(A,8);
			Assert::AreEqual(18, S);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../пр6.4іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64іт
{
	TEST_CLASS(UnitTest64іт)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 6;
			int a[size] = { 5,6,7,1,6,3 };
			int d = Sum(a, 3);
			Assert::AreEqual(d,18);
		}
	};
}

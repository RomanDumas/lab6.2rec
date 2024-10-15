#include "pch.h"
#include "CppUnitTest.h"
#include "../LR6.2rec/LR6.2rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int l = 0;
			int k = 10;
			int* b = new int[k];
			const int i = 10;
			int expected[i] = { 9,8,7,6,5,4,3,2,1,0 };
			Imput(b, k, l);
			Inverse(b, k, l);


			Assert::AreEqual(b[0], expected[0], 0.00001);
		}
	};
}

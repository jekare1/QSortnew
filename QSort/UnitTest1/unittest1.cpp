#include "stdafx.h"
#include "CppUnitTest.h"
#include "targetver.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int m[10] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 1 };
			
			
		qSort(m, 0, 9);
			

			int expected[10] = { 1, 1, 1, 2, 2,3,3,4,4,5 };

			for (unsigned int i = 0; i < 10; ++i)
				Assert::AreEqual(expected[i], m[i]);


		}

	};
}
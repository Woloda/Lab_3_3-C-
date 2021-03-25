#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_3.3(C)/Object.cpp"
#include "../Lab_3.3(C)/FuzzyNumber.cpp"
#include "../Lab_3.3(C)/Multi_and_Addit.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab33C
{
	TEST_CLASS(UnitTestLab33C)
	{
	public:
		
		TEST_METHOD(Test_Addit)
		{
			FuzzyNumber A(0), B(0), C(0);
			FuzzyNumber L(0);
			{
				FuzzyNumber K(0);
			}

			Assert::AreEqual(Object::Display(), (unsigned)4);
		}
	};
}
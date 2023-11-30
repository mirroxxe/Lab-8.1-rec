#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab №8.1 rec/Lab №8.1 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestContainsWhile_Negative)
		{
			std::string testInput = "randomtext"; 

			// Перевіряємо, чи функція containsWhile повертає false для рядка, який не містить усі літери з "while"
			Assert::IsFalse(containsWhile(testInput));
		}

		TEST_METHOD(TestReplaceWhile)
		{
			std::string testInput = "while hello while world"; 

			replaceWhile(testInput);

			// Перевіряємо, чи функція replaceWhile виконує заміну правильно
			Assert::AreEqual(testInput, std::string("** hello ** world"));
		}
	};
}
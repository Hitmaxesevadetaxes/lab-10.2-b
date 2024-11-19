#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\HP\source\repos\lab 10.2 b\lab 10.2 b\source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Student students[3] = {
                   {"Ivanenko", 1, COMPUTER_SCIENCE, 5, 4, {5}},
                   {"Shevchenko", 2, INFORMATICS, 3, 4, {3}},
                   {"Bondarenko", 1, COMPUTER_SCIENCE, 3, 3, {3}}
            };

            
            sortStudents(students, 3);

          
            Assert::AreEqual("Shevchenko", students[2].surname.c_str());
		}
	};
}

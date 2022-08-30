#include "pch.h"
#include "CppUnitTest.h"
#include "..\Fibanachi_Numbers\main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FibTest
{
	TEST_CLASS(FibTest)
	{
	public:
		
		TEST_METHOD(Test_FIB_ALL)
		{
			uint64_t* fib = new uint64_t[16];
			Fibanachi_ALL  B;
	        B.fibanachi_all(fib, 16);
			Assert::IsTrue(fib[0] == 0);
			Assert::IsTrue(fib[1] == 1);
			Assert::IsTrue(fib[2] == 1);
			Assert::IsTrue(fib[3] == 2);
			Assert::IsTrue(fib[4] == 3);
			Assert::IsTrue(fib[5] == 5);
			Assert::IsTrue(fib[6] == 8);
			Assert::IsTrue(fib[7] == 13);
			Assert::IsTrue(fib[8] == 21);
			Assert::IsTrue(fib[9] == 34);
			Assert::IsTrue(fib[10] == 55);
			Assert::IsTrue(fib[11] == 89);
			Assert::IsTrue(fib[12] == 144);
			Assert::IsTrue(fib[13] == 233);
			Assert::IsTrue(fib[14] == 377);
			Assert::IsTrue(fib[15] == 610);
		}
		TEST_METHOD(Test_FIB_LAST)
		{
			Fibanachi_Last A;
			int num = rand() % 100;
			std::uint64_t previous = 0;
			std::uint64_t current = 1;
			for (int i = 2; i <= num; i++) {
				std::uint64_t tmp = previous;
				previous = current;
				current = tmp + current;
			}
			Assert::IsTrue(A.fibanachi_last(num) == current);
			Assert::IsTrue(A.fibanachi_last(14) == 377);
		}

		TEST_METHOD(Test_FIB_INPUT1)
		{
				while (1) {
					int randinput = 1;
					int A = 0;
					int16_t klav = 0;
					if (randinput != 1) {
						break;
					
					}
					else {
						if (A == 0) { A = 5; Assert::IsTrue(A == 5);  break; };
						continue;
					}
				}
			}

		TEST_METHOD(Test_FIB_INPUT2)
		{
			int A = 0;
			while (1) {
				int randinput = 3;
				if (randinput != 1) {
					A = 10;
					break;
				}
				else {
					continue;
				}
			}
			Assert::IsTrue(A == 10);
		}
			
		};


};


#pragma once

#include <map>
#include <cstdio>

//Write Fibonacci iteratively and recursively(bonus: use dynamic programming)

namespace Fibonaccis
{

	void Start(const int& counter);
	void FibonacciIterator(const int& counter);
	void FibonacciRecursive(const int& counter);
	int Fibonacci(const int& i);

	std::map<int, int> cache = {};

	// Recursive will be a counter behind because we get the Fibonacci of 0
	void Start(const int& counter)
	{
		printf("Fibonacci Start : Counter = %d\n", counter);
		FibonacciIterator(counter);
		FibonacciRecursive(counter);
		printf("Fibonacci End\n");
	}

	// Did not include caching because its simple and done pretty much same as recursive way
	void FibonacciIterator(const int& counter)
	{
		int a = 0; // -2 digit
		int b = 1; // -1 digit
		int c = 0; // digit to fib
		for (int i = 0; i < counter; i++)
		{
			c = a + b;
			a = b;
			b = c;
			printf("a=%d:b=%d:c=%d\n", a, b, c);
		}
	}

	void FibonacciRecursive(const int& counter)
	{
		for (int i = 0; i < counter; i++)
		{
			int f = Fibonacci(i);
			printf("%d:%d\n", i, f);
		}
	}

	int Fibonacci(const int& i)
	{
		if ((i == 0) || (i == 1)) return i;

		// if cached, return value from cache else find Fibonacci, add to cache, and return value
		if (cache.count(i) > 0)
		{
			printf("%d is cached!\n", i);
			return cache.at(i);
		}
		else
		{
			int f = Fibonacci(i - 1) + Fibonacci(i - 2);
			cache.emplace(i, f);
			return f;
		}
	}
}
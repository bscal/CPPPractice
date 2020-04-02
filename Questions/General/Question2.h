#pragma once

#include <set>
#include <map>
#include <vector>

//Find pairs in an integer array whose sum is equal to 10 (bonus: do it in linear time)

struct PairInt
{
	int v0;
	int v1;

	// Here because of my old way of doing it.
	friend std::ostream& operator<< (std::ostream& left, const PairInt& right)
	{
		return left << "Question2: " << right.v0 << ", " << right.v1;
	}
};

[[nodiscard]] std::vector<PairInt> FindInt(const int* arr, const int& size, const int& value)
{
	std::vector<PairInt> results = {};
	std::map<int, int> values = {};

	for (int i = 0; i < size; i++)
	{
		int num = arr[i];
		if (values.count(num))
			values[num] = values[num]++;
		else
			values.emplace(num, 1);

		// I initially did 2 for loops but you can
		// just use 1 after inserting the value
		int numNeeded = value - num;
		if (values[num] > 0 && values[numNeeded] > 0)
		{
			values[num] = values[num]--;
			values[numNeeded] = values[numNeeded]--;
			results.emplace_back(PairInt({ num , numNeeded }));
		}
	}
	return results;
}

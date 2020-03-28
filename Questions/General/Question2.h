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

[[nodiscard]] std::vector<PairInt> FindInt(const int* arr, const int& size)
{
	std::vector<PairInt> results = {};
	std::map<int, int> values = {};
	//std::set<int> values = {};

	for (int i = 0; i < size; i++)
	{
		int num = arr[i];
		if (values.count(num))
			values[num] = values[num]++;
		else
			values.emplace(num, 1);
	}

	for (int i = 0; i < size; i++)
	{
		int numNeeded = 10 - arr[i];
		if (values[arr[i]] > 0 && values[numNeeded] > 0)
		{
			values[arr[i]] = values[arr[i]]--;
			values[numNeeded] = values[numNeeded]--;
			results.emplace_back(PairInt({ arr[i] , numNeeded }));
		}
	}
	return results;
}

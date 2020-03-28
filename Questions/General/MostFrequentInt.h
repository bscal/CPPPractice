#pragma once

#include <map>

// Find the most frequent integer in an array
[[nodiscard]] int const MostFrequentInt(const int* arr, const int& size)
{
	std::map<int, int> counts = {};
	int most = 0;
	int mostCount = 0;

	for (int i = 0; i < size; i++)
	{
		int current = arr[i];
		auto it = counts.find(current);
		int currentCount = 0;

		if (it == counts.end())
		{
			counts[current] = 1;
			continue;
		}
		else
		{
			currentCount = it->second;
			counts[current] = currentCount + 1;
		}

		if (currentCount > mostCount)
		{
			most = current;
			mostCount = currentCount;
		}
	}
	return most;
}
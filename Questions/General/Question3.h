#pragma once

#include <array>
#include <iostream>

// Question 3
// Given 2 integer arrays, determine if the 2nd array is a rotated version of the 1st array. 
// Ex. Original Array A={1,2,3,5,6,7,8} Rotated Array B={5,6,7,8,1,2,3}
template<size_t N>
[[nodiscard]] bool IsRotated(const std::array<int, N>& arr1, const std::array<int, N>& arr2)
{

	int offset = 0;
	int streak = 0;
	int stuck = 0;
	for (int i = 0; i < N; i++)
	{
		int a = arr1[i];
		int b = arr2[stuck];

		if (a == b)
		{
			streak++;
			stuck++;
		}
		else
		{
			streak = 0;
		}
	}
	offset = N - streak;

	for (int i = 0; i < N; i++)
	{
		if (offset == N) offset = 0;

		int a = arr1[offset];
		int b = arr2[i];

		if (a != b) return false;

		offset++;
	}
	return true;
}
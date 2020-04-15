#pragma once

#include <array>
#include <cstdio>

//Find the only element in an array that only occurs once.


/*
	So I was gonna skip this question at 1st because I thought it was just gonna be
	a loop and adding values to map. 

	While that is kinda true I did look up if there were other methods.
	And basically you can use bitwise operators to safe on space. If there
	are no duplicates then you would not need to use the complicated function
	below.
 */

int ArrayOnce(std::array<int, 7> arr)
{
	//this variable holds XOR of all the elements which have appeared "only" once.
	int ones = 0;
	//this variable holds XOR of all the elements which have appeared "only" twice.
	int twos = 0;
	int not_threes;

	for (int x : arr)
	{
		twos |= ones & x; //add it to twos if it exists in ones
		ones ^= x; //if it exists in ones, remove, otherwise, add it

		// Next 3 lines of code just converts the common 1's between "ones" and "twos" to zero.

		//if x is in ones and twos, dont add it to Threes.
		not_threes = ~(ones & twos);
		ones &= not_threes;//remove x from ones
		twos &= not_threes;//remove x from twos
	}
	return ones;

}
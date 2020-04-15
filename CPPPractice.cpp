// CPPPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

#include "Questions/General/MostFrequentInt.h"
#include "Questions/General/Question2.h"
#include "Questions/General/Question3.h"
#include "Questions/General/Question4.h"
#include "Questions/General/Question5.h"

int main()
{
    std::cout << "Hello World!\n";

    int arr[] = { 1, 7, 5, 5, 7, 9, 5, 7, 7 }; 
    int q1 = MostFrequentInt(arr, 9); // 7
    std::clog << q1 << std::endl;
    assert(q1 == 7);

    int arr2[] = { 7, 5, 9, 3, 6, 5, 3, 7, 1 };
    auto q2 = FindInt(arr2, 9, 10); // 4
    std::clog << q2.size() << std::endl;
    assert(q2.size() == 4);

    bool q3 = IsRotated(std::array<int, 7>({ 1,2,3,5,6,7,8 }), std::array<int, 7>({ 5,6,7,8,1,2,3 }));
    std::clog << q3 << std::endl; // Is
    assert(q3);

	bool q3a = IsRotated(std::array<int, 7>({ 1,2,3,5,6,7,8 }), std::array<int, 7>({ 3,5,6,1,2,7,8 }));
	std::clog << q3a << std::endl; // Is not
    assert(!q3a);

	bool q3b = IsRotated(std::array<int, 5>({ 0, 0, 1, 2, 0 }), std::array<int, 5>({ 0, 0, 0, 1, 2 }));
	std::clog << q3b << std::endl; // Is
    assert(q3b);

    Fibonaccis::Start(10);

    int q5 = ArrayOnce(std::array<int, 7>({ 2, 2, 2, 1, 3, 3, 3}));
	std::clog << q5 << std::endl; // Is
	assert(q5 == 1);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

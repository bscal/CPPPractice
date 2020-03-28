// CPPPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

#include "Questions/General/MostFrequentInt.h"
#include "Questions/General/Question2.h"

int main()
{
    std::cout << "Hello World!\n";

    int arr[] = { 1, 7, 5, 5, 7, 9, 5, 7, 7 }; 
    int q0 = MostFrequentInt(arr, 9); // 7
    std::clog << q0 << std::endl;
    assert(q0 == 7);

    int arr2[] = { 7, 5, 9, 3, 6, 5, 3, 7, 1 };
    auto q1 = FindInt(arr2, 9); // 4
    std::clog << q1.size() << std::endl;
    assert(q1.size() == 4);
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

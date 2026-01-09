// Lecture day 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

void Print(unsigned int x); //function prototype



int main()
{
  //  int x = 231;
   // Print(x);

    int x = 149;
    Print(x);
     x = x << 1;
     Print(x);
}

void Print(unsigned int x) //function implimentation
{
    std::cout << "dec = " << x << '/t';
    std::cout << "Hex = " << std::hex << x << std::dec << '/t';
    //std::cout << "bin = " << std::bitset << x << std::dec << '/t';
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

// C++ lecture one.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //std::cout << "Hello World!\n";
    int x;
    x = 74;
    std::cout << x << std::endl;
    std::cout << (char)x << std::endl;

    int y = 10;
    if (y == 12) 
    {
        std::cout << "y = 12";
    }
    int z = 5;
    
    switch (z) {
        
    case 5:
        std::cout << "it is 5 " << std::endl;
        break; // dp not forget breaks
    case 6:
        std::cout << "it is 6" << std::endl;
        break;
    
    }

    enum Color{Red,White};
    Color color = Color::White;

        //there is no membership operator for enums (no dot opperator)
    std::cout << color << std::endl;

    switch (color) {
    case Color:: Red:
        std::cout << "Red" << std::endl;
        break;
    case Color::White:
        std::cout << "White" << std::endl;
        break;
    }

   // Print();
    int array[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 6; i++) //writing past the memory allocated
    {
        array[i] = i;
        //very bad - can overwrite varibles that are not yours
    }
    for (int i = 0; i < 6; i++)
    {
        std::cout << array[i] << std::endl;
    }

    //character arrays get special treatment by << >> opperators

    char Name[6] = "Jason"; //every char array has an extra piece added on for the null terminator added to the end
    std::cout << Name << std::endl;


    char name2[32];
    std::cin >> name2;
    std::cout << "name = " << name2 << std::endl;
    //Without witespace

    char name4[32];
    std::cin.getline(name4, 32);
    std::cout << "name = " << std::endl;



    
}
//void Print()
//{
//    std::cout << "bald white man" << std::endl;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

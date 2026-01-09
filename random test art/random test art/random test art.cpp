// random test art.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::vector<char*> imageData;
    const char* image = "image.art";

    //imagine im opening the file and reading it here
    std::ifstream binin(image, std::ios::binary);
    int header;

    //read each file into a string
    binin.read((char*)&header, sizeof(header));

    char* currentString;

    for (int i = 0; i < header; i++) 
    {
        binin.read((char*) &currentString, sizeof(int));
        imageData.push_back((char*)currentString);
    }
    //display image
    for (int i = 0; i < imageData.size(); i++) {
        std::cout << imageData[i] << std::endl;
    }
    //deconstructor
    binin.close();
    
   // delete &imageData;
}
struct resolution {
    unsigned int rows;
    unsigned int columns;
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

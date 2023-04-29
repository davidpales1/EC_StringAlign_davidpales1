#include <iostream>
#include <string>

int main()
{
    // initialize input variable
    std::string input;

    // initialize width variable
    int width;

    // Read input from the user
    std::cout << "Enter string: ";
    // get the whole line
    std::getline(std::cin, input);

    // read the width 
    std::cout << "Enter width: ";
    std::cin >> width;

    // If there is an odd number of spaces, add one more space at the end
    if ((width) % 2 != 0) {
        width = width + 1;
    }
    // Calculate the number of spaces needed to center the string
    int spaces = width / 2;

    // Print the first half of the space string
    for (int i = 0; i < spaces; i++) {
        std::cout << " ";
    }
    // Print the string
    std::cout << input;
    // Print the secound half of the space string
    for (int i = 0; i < spaces; i++) {
        std::cout << " ";
    }

    return 0;
}

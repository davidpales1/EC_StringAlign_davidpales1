#include <iostream>
#include <string>

int main()
{
    std::string input;
    int width;

    // Read input from the user
    std::cout << "Enter string: ";
    std::getline(std::cin, input);

    std::cout << "Enter width: ";
    std::cin >> width;

    // Calculate the number of spaces needed to center the string
    int spaces = (width - input.length()) / 2;

    // Print the centered string
    for (int i = 0; i < spaces; i++) {
        std::cout << " ";
    }
    std::cout << input;
    for (int i = 0; i < spaces; i++) {
        std::cout << " ";
    }

    // If there is an odd number of spaces, add one more space at the end
    if ((width - input.length()) % 2 != 0) {
        std::cout << " ";
    }

    return 0;
}

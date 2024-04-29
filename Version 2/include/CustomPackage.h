#ifndef CUSTOMPACKAGE_H
#define CUSTOMPACKAGE_H

#include <iostream>
#include <optional>

class CustomPackage
{
    private:
    int number{0};

    public:
    CustomPackage() = default;
    ~CustomPackage() = default;

    CustomPackage(const CustomPackage&) = delete;
    CustomPackage(CustomPackage&&) = delete;

    CustomPackage& operator=(const CustomPackage&) = delete;
    CustomPackage& operator=(CustomPackage&&) = delete;

    inline void Square()
    {
        std::cout << "Enter a number between 1 to 10: ";
        std::cin >> number;

        while(number < 0 || number > 10)
        {
            std::cerr << "Invalid Input\n";
            std::cout << "\nEnter a number between 1 to 10: ";
            std::cin >> number;
        }
        
        std::optional<int> result = number;

        if(result.has_value())   

        {
            int actualResult = result.value();
            std::cout << "Square of the number is: " << actualResult*actualResult << "\n";
        }
    }

};


#endif // CUSTOMPACKAGE_H

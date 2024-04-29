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

    void Square();

};


#endif // CUSTOMPACKAGE_H

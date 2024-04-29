#include "CustomPackage.h"
#include <SFML/System.hpp>
#include <SFML/Main.hpp>

int main()
{
    CustomPackage c1;
    c1.Square();

    sf::Int32 custom;

    std::cout << "\nUsing SFML Attribute: " << custom << "\n";
}
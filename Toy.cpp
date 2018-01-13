//
// EPITECH PROJECT, 2018
// Rush2
// File description:
// Toy Class Functions
//

#include "Toy.hpp"

Toy::Toy(std::string toyName, std::string title)
        :Object("Toy"), _title(title), _toyName(toyName)
{
}

Toy::~Toy()
{
}

std::string Toy::getTitle() const
{
        return (_title);
}


std::string Toy::getToyName() const
{
        return (_toyName);
}
//
// EPITECH PROJECT, 2018
// Object
// File description:
// Object
//

#include "Object.hpp"

Object::Object(std::string typeName)
        : _typeName(typeName)
{
}

Object::~Object()
{
}

std::string Object::getTypeName() const
{
        return (_typeName);
}
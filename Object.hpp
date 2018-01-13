//
// EPITECH PROJECT, 2018
// Rush2
// File description:
// Object Header
//

#ifndef OBJECT_HPP_
# define OBJECT_HPP_

#include <string>
#include <iostream>

class Object {
public:
	Object(std::string typeName);
	~Object();
        std::string getTypeName() const;
private:
        std::string _typeName;
};

#endif /* !OBJECT_HPP_ */

//
// EPITECH PROJECT, 2018
// Rush2
// File description:
// Header of Toy Class
//

#ifndef TOY_HPP_
# define TOY_HPP_

#include "Object.hpp"

class Toy : public Object {
public:
	Toy(std::string toyName, std::string title);
	~Toy();
	virtual void isTaken() = 0;
        std::string getTitle() const;
        std::string getToyName() const;

private:
        std::string _title;
        std::string _toyName;
};

#endif  /* !TOY_HPP_ */

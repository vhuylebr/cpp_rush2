//
// EPITECH PROJECT, 2018
// Rush2
// File description:
// Header of Teddy Class
//

#ifndef TEDDY_HPP_
# define TEDDY_HPP_

#include "Toy.hpp"

class Teddy : public Toy {
public:
	Teddy();
	~Teddy();
	void isTaken() final;
};

#endif /* !TEDDY_HPP_ */

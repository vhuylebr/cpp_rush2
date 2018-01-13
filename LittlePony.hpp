//
// EPITECH PROJECT, 2018
// Rush2
// File description:
// Header of LittlePony class
//

#ifndef LITTLEPONY_HPP_
# define LITTLEPONY_HPP_

#include "Toy.hpp"

class LittlePony : public Toy {
public:
	LittlePony();
	~LittlePony();
	void isTaken() final;
};

#endif /*  !LITTLEPONY_HPP_ */

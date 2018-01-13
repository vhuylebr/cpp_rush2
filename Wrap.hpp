//
// EPITECH PROJECT, 2018
// Rush2
// File description:
// Header of Toy Class
//

#ifndef WRAP_HPP_
# define WRAP_HPP_

# include "Toy.hpp"

class Wrap {
public:
	Wrap();
	~Wrap();
	void wrapMeThat(Toy *toy);
private:
	enum Status {
		OPEN,
		CLOSE
	};
	Status _status;
	Toy *_toyContained;
};

#endif  /* !WRAP_HPP_ */

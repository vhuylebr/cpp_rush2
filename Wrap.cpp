//
// EPITECH PROJECT, 2018
// Rush2
// File description:
// Wrap Class functions
//

#include "Wrap.hpp"

Wrap::Wrap()
	:_status(OPEN)
{
}

Wrap::~Wrap()
{

}

void Wrap::wrapMeThat(Toy *toy)
{
	_toyContained = toy;
	_status = CLOSE;
}

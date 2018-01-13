#include "Wrap.hpp"
#include "LittlePony.hpp"
#include "Object.hpp"
#include "Teddy.hpp"
#include "Toy.hpp"

int main(void)
{
//	Toy *toy = new Toy();
	Teddy *teddy = new Teddy;
	//LittlePony *pony = new LittlePony();
	//Wrap *wrap = new Wrap();

	teddy->isTaken();
        std::cout << teddy->getTitle() << std::endl;
	return 0;
}
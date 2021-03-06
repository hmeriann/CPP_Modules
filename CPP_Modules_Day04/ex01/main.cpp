#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define COUNT 5

int main()
{
	Animal* animals[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		if (i < COUNT / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < COUNT; i++)
		delete animals[i];
	
	std::cout << "\n\n**>\t**>\t**>\t**>\t**>\t**>\t**>\t**>" << std::endl;
	
	Dog* dog = new Dog();
	Cat* cat = new Cat();
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound(); //will output the cat sound!
	cat->makeSound();

	cat->setCatsIdea("😻 : 🐟🐟🐟 Meaowww 🐠🐠🐠", 3);
	cat->setCatsIdea("😾 : 💣💣💣 Meaowww!!! 💣💣💣", 103); // error message

	dog->setDogsIdea("🐶 : 🍖🍖🍖🍖 Bark-bark! 🍖🍖🍖🍖", 0);
	dog->setDogsIdea("🥺 : 🦴🦴🦴🦴 RRRRRRRR!!! 🦴🦴🦴🦴", 100); // error message

	dog->getDogsIdea(6); // Idea #6
	dog->getDogsIdea(0); //"🐶 : 🍖🍖🍖🍖 Bark-bark! 🍖🍖🍖🍖"
	dog->getDogsIdea(100); // error message

	cat->getCatsIdea(103); //error message
	cat->getCatsIdea(10); //Idea #10
	cat->getCatsIdea(3); //"😻 : 🐟🐟🐟 Meaowww 🐠🐠🐠"

	delete dog;
	delete cat;

	return 0;
}
#ifndef __HOUSE_H_
#define __HOUSE_H_

//#include "Animal.h"
class Animal;	//전방선언

class House {
public:
	Animal* animal;

	void setAnimal(Animal* a);

	class goo;

	class foo {
	public:
		goo* g;
	};

	class goo {
		foo f;
	};
};

#endif

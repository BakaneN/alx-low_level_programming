#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* struct dog - dog structure
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner
*/

struct dog
{
		char *name;
		float age;
		char *owner;

};


#endif

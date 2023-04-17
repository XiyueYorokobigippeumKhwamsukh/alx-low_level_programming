#ifndef dog_h
#define dog_h


/**
  * struct dog - new type
  * @name: first member
  * @age: second member
  * @owner: third member
  * Description: Longer decription
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif

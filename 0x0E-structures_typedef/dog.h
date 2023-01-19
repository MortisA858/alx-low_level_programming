#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - short description. Structure declaration
 * @name: First member (char variable)
 * @age: Second member (float variable)
 * @owner: Third member (char variable)
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	/* declare as many membrs as desired, but */
	/* the entire structure size must be known to the compiler */
};

#endif

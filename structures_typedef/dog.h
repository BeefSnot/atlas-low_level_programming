#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the doggo data
 * @name: the puppers name
 * @age: the puppers age
 * @owner: The doggos parent
 *
 * Description: Defines metadata about the doggos and the type of structure.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

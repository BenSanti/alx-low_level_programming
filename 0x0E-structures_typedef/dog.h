#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: the float or number
 * @owner: the second character to enter
 *
 * Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 * void init_dog(struct dog *d, char *name, float age, char *owner):
 * void print_dog(struct dog *d):
 * typedef struct dog dog_t:
 * void free_dog(dog_t *d):
 * char *_strcpy(char *dest, char *src):
 * int _strlen(char *s):
 * @name: First member
 * @age: the float or number
 * @owner: the second character to enter
 * @d: The number
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

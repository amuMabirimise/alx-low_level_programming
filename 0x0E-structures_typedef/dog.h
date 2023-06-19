#ifndef DOG_G
#define DOG_G

/**
 * struct dog - the function  name
 * @name: First member
 * @age:Second member
 * @owner: Second member
 * Description: Longer description
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);

#endif

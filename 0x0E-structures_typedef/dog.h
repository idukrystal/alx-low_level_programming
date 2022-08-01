#ifndef DOG
#define  DOG

/**
 * struct dog - a struct to store dog data
 * @name: the dogs name
 * @age: thr dogs age
 * @owner: the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - alias for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *);
char *_strcpy(char *, char *, int);

#endif /* DOG */

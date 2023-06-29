#include <stdio.h>

struct dog
{
    char *name;
    float age;
    char *owner;
};

void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;
    }

    if (d->name == NULL)
    {
        printf("Name: (nil)\n");
    }
    else
    {
        printf("Name: %s\n", d->name);
    }

    printf("Age: %.2f\n", d->age);

    if (d->owner == NULL)
    {
        printf("Owner: (nil)\n");
    }
    else
    {
        printf("Owner: %s\n", d->owner);
    }
}

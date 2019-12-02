#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#ifndef lab10
#define lab10
#define size 100
typedef struct
{
	char foodName[size];
	double fat;
	double protein;
	int calories;
	int cholesterol;
	double iron;
	double vitamin;
}food_t;
void labOn();
void read_list(const char *file_name,food_t *food1,food_t *food2,food_t *food3,food_t *food4,food_t *food5,food_t *food6 );
double safe_to_eat (food_t current_food);
food_t get_params(void);
#endif

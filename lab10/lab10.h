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
typedef struct
{
	double proteinOnes;
	double proteinTwos;
	int caloriesOnes;
	int caloriesTwos; 
}search_param_t;
void labOn();
void read_list(const char *file_name,food_t *food1,food_t *food2,food_t *food3,food_t *food4,food_t *food5,food_t *food6 );
double safe_to_eat (food_t current_food);
search_param_t get_params (void);
void intSwap(int *x,int *y);
void doubleSwap(double *x,double *y);
void convert(FILE *inp , FILE *outp);
int is_match (food_t current_food, search_param_t parameters);
#endif

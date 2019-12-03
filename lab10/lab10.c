#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "lab10.h"
void labOn()
{
	printf("\n************* part 1 ****************\n");
	food_t food1,food2,food3,food4,food5,food6;
	read_list("food.txt",&food1,&food2,&food3,&food4,&food5,&food6);
	double partOneResult=safe_to_eat(food1);
	printf("%s %f %f %d %d %f %f\n",food1.foodName,food1.fat,food1.protein,food1.calories,food1.cholesterol,food1.iron,food1.vitamin);
	printf("\npartOne=%f gram besini tuketebilir.",partOneResult);	
	printf("\n************* part 2 ****************\n");
	search_param_t part3;
	part3=get_params();//sturcur return deger dondurdum.
	if(part3.proteinOnes>part3.proteinTwos)
	{
		printf("\nproteinOnes max,proteinTwos min");
	}
	else if(part3.proteinTwos>part3.proteinOnes)
	{
		printf("\nproteinOnes min,proteinTwos max");		
	}
	else
	{
		printf("\nesit protein");
	}
		if(part3.caloriesOnes>part3.caloriesTwos)
	{
		printf("\ncaloriesOnes max,caloriesTwos min");
	}
	else if(part3.caloriesTwos>part3.caloriesOnes)
	{
		printf("\ncaloriesOnes min,caloriesTwos max");		
	}
	else
	{
		printf("\nesit calories");
	}
	printf("\n************* part 3 ****************\n");
	printf("\n************* part 3yapým asamasýnda ****************\n");
	FILE *part3txt;
	FILE *part3bin;
	convert(part3txt,part3bin);
	printf("\n************* part 4 ****************\n");

}
/*
*dosyadan veri okuma
*/
void read_list(const char *file_name//txt dosyasy input parametre
,food_t *food1,food_t *food2,food_t *food3,food_t *food4,food_t *food5,food_t *food6 )//dosyadaki verileri yazilacak yer input parametre
{
    FILE *tempFile;
    tempFile=fopen(file_name,"r");
    if(tempFile==NULL)
        printf("File Could Not Be Opened!!");
    else
    {
 		fscanf(tempFile,"%s %lf %lf %d %d %lf %lf\n",(*food1).foodName,&(*food1).fat,&(*food1).protein,&(*food1).calories,&(*food1).cholesterol,&(*food1).iron,&(*food1).vitamin);
		fscanf(tempFile,"%s %lf %lf %d %d %lf %lf\n",(*food2).foodName,&(*food2).fat,&(*food2).protein,&(*food2).calories,&(*food2).cholesterol,&(*food2).iron,&(*food2).vitamin);	
    	fscanf(tempFile,"%s %lf %lf %d %d %lf %lf\n",(*food3).foodName,&(*food3).fat,&(*food3).protein,&(*food3).calories,&(*food3).cholesterol,&(*food3).iron,&(*food3).vitamin);
		fscanf(tempFile,"%s %lf %lf %d %d %lf %lf\n",(*food4).foodName,&(*food4).fat,&(*food4).protein,&(*food4).calories,&(*food4).cholesterol,&(*food4).iron,&(*food4).vitamin);
		fscanf(tempFile,"%s %lf %lf %d %d %lf %lf\n",(*food5).foodName,&(*food5).fat,&(*food5).protein,&(*food5).calories,&(*food5).cholesterol,&(*food5).iron,&(*food5).vitamin);
		fscanf(tempFile,"%s %lf %lf %d %d %lf %lf"  ,(*food6).foodName,&(*food6).fat,&(*food6).protein,&(*food6).calories,&(*food6).cholesterol,&(*food6).iron,&(*food6).vitamin);
	}
    fclose(tempFile);
}
/*
*dosyadan veri okuma
*/
double safe_to_eat(food_t current_food)
{
	double safe=0;
	safe=300*current_food.fat/current_food.cholesterol;
	return safe;
}
search_param_t get_params (void)
{
	search_param_t food;
	printf("4 deger girilecek sirayla 2 double protein 2 int calories girin\n" );
	scanf("%lf",&food.proteinOnes);
	scanf("%lf",&food.proteinTwos);
	scanf("%d",&food.caloriesOnes);
	scanf("%d",&food.caloriesTwos);
	return food;	
}

/**/void convert(FILE *text_input_file , FILE *bin_file)
{
	
}



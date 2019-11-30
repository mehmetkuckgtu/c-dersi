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
	printf("\n part 2  yapilmadi\n");
	/*
	sorunu anlasilamadigindan yapmadim 
	search_param get_params (void) gibi bir foksiyon 
	cagirilamaz.
	*/
	printf("\n************* part 3 ****************\n");
	printf("\n part 3  yapilmadi\n");
	/*
	bu istenileni nasil yapacagimi tasarlayamadim.
	 ve part 2 deki olay ile baglantili oldugu icin yapilmadi*/
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


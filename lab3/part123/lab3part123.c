#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0
//part2.1
void windF(int wind);
void tempF(int temp);
//part2.2-3
int is_windless(int wind);
int is_windy(int wind);
int is_stormy(int wind);
int is_cold(int temp);
int is_warm(int temp);
int is_hot(int temp);
//part3

int main()
{
	//part1
	char inputInfo[100];
	FILE *frp;
	int day,wind,temp;
	frp=fopen("inputpart1.txt","r+");
	fscanf(frp,"%d\n%d\n%d\n",&day,&wind,&temp);

	printf("\nday=%d,wind=%d,temp=%d",day,wind,temp);
	
	//part2.1
	windF(wind);
	tempF(temp);
	printf("is_windless=%d\n",is_windless(wind));
	printf("is_windy=%d\n",is_windy(wind));
	printf("is_stormy=%d\n",is_stormy(wind));
	printf("is_cold=%d\n",is_cold(temp));
	printf("is_warm=%d\n",(is_warm(temp)));
	printf("is_hot=%d\n",is_hot(temp));
	//part2.2
	
	
	return 0;
}


//part 2.1
void windF(int wind)
{
	if(wind>=0 && wind<=20)
	{
		printf("\nweather =windless\n");
	}
	else if(wind>20 && wind<=50)
	{
		printf("\nweather=windy\n");
	}
	else if(wind>50)
	{
		printf("\nweather=stromy\n");
	}
}

void tempF(int temp)
{
	if(temp>=0 && temp<=10)
	{
		printf("temperature =cold\n");
	}
	else if(temp>10 && temp<=25)
	{
		printf("temperature=warm\n");
	}
	else if(temp>25 && temp<=46 )
	{
		printf("temperature=hot\n");
	}
}

//part2.2-3
int is_windless(int wind)
{
	bool value=false;
	if(wind>=0 && wind<=20)
	{
		value=true;
	}
	return value;
}
int is_windy(int wind)
{
	bool value=false;
	if(wind>20 && wind<=50)
	{
		value=true;
	}
	return value;
}
int is_stormy(int wind)
{
	bool value=false;
	if(wind>50)
	{
		value=true;
	}	
	return value;
}
int is_cold(int temp)
{
	bool value=false;
	if(temp>=0 && temp<=10)
	{
		value=true;
	}	
	return value;
}
int is_warm(int temp)
{
	bool value=false;
	if(temp>10 && temp<=25)
	{
		value=true;
	}	
	return value;
}
int is_hot(int temp)
{
	bool value=false;
	if(temp>25 && temp<=40)
	{
		value=true;
	}	
	return value;
}


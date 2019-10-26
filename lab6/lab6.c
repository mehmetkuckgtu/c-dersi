#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>
#include"lab6.h"
//part1
bool is_prime(int number)
{
	int i=0; bool control=false;
    int counter=0;

	for(i=2; i<number || control==true; ++i)
	{
		if(number%i == 0)
		{
			counter++;
		}
	}
	if(counter==0 && number>=2)
	{
        control=true;
    }
	return control;
}
bool is_odd(int number)
{
	bool control=false;
	if((number%2==1))
	{
		control=true;
	}
	return control;
}
bool is_even(int number)
{
	bool control=false;
	if((number%2==0))
	{
		control=true;
	}
	return control;
}
//part2
void print_int_array(const int p_arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("part2.1dizieleman%d=%d\n",i,p_arr[i]);
	}
}
void print_char_array(const char p_arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("part2.2dizieleman%d=%c\n",i,p_arr[i]);
	}
}
//part3
void assign_numbers_to_array(int p_array[], int size, bool func(int))
{
	int i,counter=0;
	for(i=0;(i<100) || (counter==size);i++)
	{
		if(func(i)==true)
        {
           p_array[counter]=i;
           counter++;
        }
	}
}
//part4
int change_array(const char c_arr1[], char c_arr2[], int size, char ignored_char)
{
	int i,counter=0;
	for (i=0;i<size;i++)
	{
		if (c_arr1[i]!=ignored_char)
		{
			c_arr2[counter]=c_arr1[i];
			counter++;
		}

	}
	return counter;
}
//part5
double compute_mean_of_array(int p_array[], int size)
{
	double total = 0, mean;
	int i;
	for(i=0; i<size; ++i)
		total += p_array[i];
	mean = total / size;
	return mean;
}
double c()
{
    double x=3.3;
    return x;
}

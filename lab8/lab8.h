#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#ifndef lab8
#define lab8

#define STR_SIZE 100
#define NUM_NAMES 10
void labSekiz();
//part1
int read_list(const char *file_name, char str_array[][STR_SIZE]);
void print_list(char str_array[][STR_SIZE], int size);
//part2
void sort_names(char names[][STR_SIZE],char birthdays[][STR_SIZE], int n);
//part3
void uppercase_str(char *str);
//part4
void most_used(const char birthdays[][STR_SIZE],int n,char month[]);
#endif

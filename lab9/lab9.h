#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#ifndef lab9
#define lab9
#define MAX_COL 50
#define MAX_ROW 200
void labDokuz();
void print_list(char str_array[][MAX_COL], int size);
int read_list(const char *file_name,char str_array[][MAX_COL]);
void whoLivesInTheCity(char city[],char names[][MAX_COL],char locations[][MAX_COL],char nameLocations[]);
int findFirst(const char str[], char ch);
int findLast(const char str[], char ch);
int f(int x, int y);
void modify_ptr_arr(char* ptr_arr[], int row_c, int index, char new_word[]);
void print_ptr_arr(char* ptr_arr[], int row_c);
int get_ptr_arr(char sentences[][MAX_COL], int row_c, char* ptr_arr[]);
#endif

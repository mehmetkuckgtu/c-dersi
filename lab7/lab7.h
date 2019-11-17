#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#ifndef lab7
#define lab7
#define SIZE 9
#define MAX_SIZE 100
void labYedi();
void print_puzzle( char m[][SIZE],int n);
void fill_puzzle_matrix(char m[][SIZE],int* n);
bool is_same_word( char m[][SIZE],int n, char word[],int x,int y,char d);
void mark_puzzle(char m[][SIZE],int n,int x,int y,char d,int lenght);
int len_str( char* word);
void is_found( char m[][SIZE],int n, char word[],int* params);
#endif

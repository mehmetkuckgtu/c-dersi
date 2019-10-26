#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#ifndef lab6
#define lab6
//part 1
bool is_prime(int number);
bool is_odd(int number);
bool is_even(int number);
//part 2
void print_int_array(const int p_arr[], int size);
void print_char_array(const char p_arr[], int size);
//part3
void assign_numbers_to_array(int p_array[], int size, bool func(int));
//part4
int change_array(const char c_arr1[], char c_arr2[], int size, char ignored_char);
//part5
double compute_mean_of_array(int p_array[], int size);
double c();
/*double compute_deviation_of_array(const int p_array[], int size);
//part6
void reverse_array(int arr[], int size);
*/
#endif

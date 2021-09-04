#pragma ones

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void vec_in(int[], int const);
void display(int[], int const);
void vec_random(int[], int const);
void change(int *, int, int);

void selection_sort(int[], int const);
void exchange_sort(int[], int const);
void bubble_sort(int[], int const);
void optimazed_bubble_sort(int[], int const);
void insertion_sort(int[], int const);

void merge_sort(int [], int const, int const);
void merge(int [], int const, int const, int const);
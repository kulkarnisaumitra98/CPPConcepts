#ifndef A_LENGTH
#define A_LENGTH 1000000
#endif

#ifndef SAUMI_H
#define SAUMI_H

#include<vector>
#include<array>

int binarysrch(std::array<int,A_LENGTH>&a,int x,int min,int max);
int binarysrch(int *a,int x,int min,int max);
int binarysrch(std::vector<int>&a,int x,int min,int max);

void swap(int &x, int &y);
void swap(double &x, double &y);

void selsort(std::array<int,A_LENGTH>&a,int min, int max);
void selsort(std::array<double,A_LENGTH>&a,int min, int max);
void selsort(std::vector<int>&a);
void selsort(std::vector<double>&a);
void selsort(int *a,int min, int max);
void selsort(double *a,int min, int max); 

void merge(int *a,int min,int centre ,int max);
void merge(double *a,int min,int centre ,int max);
void mergesort(int *a,int min,int max);
void mergesort(double *a,int min,int max);
void merge(std::array<int,A_LENGTH>&a,int min,int centre ,int max);
void mergesort(std::array<int,A_LENGTH>&a,int min,int max);
void merge(std::vector<int>&a,int min,int centre ,int max);
void mergesort(std::vector<int>&a,int min,int max);
void mergesort(std::vector<double>&a,int min,int max);
void merge(std::vector<double>&a,int min,int centre ,int max);

void bubble(int *a,int min,int max);
void bubble(double *a,int min,int max);
void bubble(std::vector<int>&a,int min,int max);
void bubble(std::vector<double>&a,int min,int max);
void bubble(std::array<double,A_LENGTH>&a,int min,int max);
void bubble(std::array<int,A_LENGTH>&a,int min,int max); 

#endif

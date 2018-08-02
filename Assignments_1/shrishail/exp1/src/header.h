/**
*@headerfile stdio.h
*/
#include<stdio.h>
/**
*@headerfile stdlib.h
*/
#include<stdlib.h>
/**
*@headerfile stdlib.h
*/
#include<assert.h>
/**
*@headerfile string.h
*/
#include<string.h>
/**
*@def MAX
*/
#define MAX 50
/**
*@def SIZE
*/
#define SIZE 26
struct hashtable
{
char *str;
int count[MAX];
char fname[MAX][SIZE];
struct hashtable* next;
};
struct hashtable *hasharray[SIZE];
struct hashtable *create(char *str);
void insert(char *str, char *dest,int argc);
int get_index(char ch);
void copy_file(FILE *fp2,int *argc);

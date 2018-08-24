/*
 * File:header.h
 * author:Shrishail Satihal
 * Description:Hash table implementation
 * Date:23-8-18
 * last modified:23-8-18
 */

/*
 * header guard
 */
#ifndef _HEADER_H

/*
 * Header guard
 */
#define _HEADER_H

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
#define MAX 150
/**
 *@def SIZE
 */
#define SIZE 26
struct hashtable{
    char *str;
    int count[MAX];
    char fname[MAX][SIZE];
    struct hashtable* next;
};
struct hashtable *hasharray[SIZE];
/*
 * Function prototype for creating a hash table
 */
struct hashtable *create(char *str);

/*
 * function prototype for inserting a node
 */
void insert(char *str, char *dest,int argc);

/*
 * function prototype for getting index of string
 */
int get_index(char ch);

/*
 * function prototype for copying contents of file
 */
void copy_file(FILE *fp2, int *argc);

/*
 * function prototype for displaying the contents of file
 */
void display(FILE *fp2, int *argc); 
#endif///end of header guard

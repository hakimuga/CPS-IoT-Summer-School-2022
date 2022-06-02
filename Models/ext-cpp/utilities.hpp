#ifndef _Utilities
#define _Utilities

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <math.h>
#include <time.h>

#include <iostream>
#include <random>

int INFINIT();
int PERIOD();
int MIN(int d1, int d2, int d3, int d4);
int chooseFollowUpDelay(); 

const  char* getfield(char* line, int num);

const float getfield1(char* filecsv, int ln, int cl);


float minDIST(float n1, float n2, float n3);
float minDISTT(float n1, float n2);

float readWH(int item);

float readWV(int item);

float readWP(int item);

float readDIST0(int item);

float readDIST1(int item);

float readDIST2(int item);

float readDIST3(int item);

float readDIST4(int item);

float readDIST5(int item);

float read();

void write(float value);

void compute_fail(int function_param_0, float function_param_1, int ID);

void compute_transientFail(int function_param_0, float function_param_1, int ID);

void compute_repair(int function_param_0, float function_param_1, int ID);

float compute_wf(float rp, float wf, float wh);

float readMTBF ( int function_param_0);

float readMTTR ( int function_param_0);

float readMTTF ( int function_param_0);

int modulo(int function_param_0, int function_param_1);

int flooring(float function_param_0);

int maxClocks(int function_param_1, int function_param_2);

int minClocks(int function_param_1, int function_param_2);

int ceiling(float function_param_0);

int  randomize(int c);

int  randomizeWF(int c);

int IsClose(int function_param_0, int function_param_1, int function_param_2, int function_param_3);

#endif

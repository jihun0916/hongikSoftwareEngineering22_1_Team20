#pragma once
#include <iostream>
#include <cstdio>
#include <map>
#include "ItemList.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

class Main {
public:
	void Run();
private:
	ItemList purchaseList, saleList;
	map<string, ItemList> base;
	//FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	//FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

};
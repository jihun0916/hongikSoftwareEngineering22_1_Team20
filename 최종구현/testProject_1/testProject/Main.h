#pragma once
#include <iostream>
#include <cstdio>
#include <map>
#include "ItemList.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//Class: Main
//Description: 모든 시퀀스를 관리하고 Input.txt의 처음 2글자로 올바른 컨트롤 클래스와 매칭시킨다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

using namespace std;

class Main {
public:
	void Run();
private:
	ItemList purchaseList; //사용자가 구매할 수 있는 상품목록 전체 DB와 비슷한 역할
	map<string, ItemList> saleList; //사용자가 판매하는 상품목록 <사용자 ID, 리스트>
	map<string, ItemList> base; //사용자가 구매한 상품 목폭 <사용자 ID, 리스트>
};

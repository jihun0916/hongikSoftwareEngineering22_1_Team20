#pragma once
#include <iostream>
#include <list>
#include "Item.h"

//Class:ItemList (Entity Class)
//Description: Item들을 리스트로 관리하는 클래스 아이템을 추가하는 기능이 있다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

using namespace std;
class ItemList
{ 
public:
	bool AddNewItem(char* _name,char*_company,int _price,int _quantity,string ID);
	list<Item> Items;
	int size = 0;

private:
	
};


#pragma once
#include <iostream>
#include <list>
#include "Item.h"

//Class:ItemList (Entity Class)
//Description: Item���� ����Ʈ�� �����ϴ� Ŭ���� �������� �߰��ϴ� ����� �ִ�.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
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


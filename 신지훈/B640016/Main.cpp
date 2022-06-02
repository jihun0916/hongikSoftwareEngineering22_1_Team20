#pragma once
#pragma warning(disable:4996)
#include "Main.h"
#include "ItemRegistration.h"
#include "ShowMyitems.h"
#include "ItemInfoSearch.h"
#include "PurchaseItem.h"
#include "ShowSoldItems.h"
#include <iostream>
#include <fstream>
using namespace std;

bool IsSelected;
string currentID;
string currentkey;
void Main::Run() 
{
	/*FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");*/
	ifstream fin(INPUT_FILE_NAME);


	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		//fscanf(in_fp, "&d %d ", &menu_level_1, &menu_level_2);
		fin >> menu_level_1;
		fin >> menu_level_2;
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				//1.1. ȸ������ �޴� �κ�
				//ȸ������ �Լ�
				break;
			}
			case 2:
			{
				//1.2 ȸ��Ż��

				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				//2.1 �α���
				break;
			}
			case 2:
			{
				//2.2 �α׾ƿ�
				break;
			}
			}
		}
		case 3:
		{
			switch (menu_level_2)
			{
				case 1:
				{
					//Account?
					string ID = "";

					char name[MAX_STRING], company[MAX_STRING], price[MAX_STRING],quantity[MAX_STRING];
					//fscanf(in_fp, "%s %s %s %s", name, company, price, quantity);

					fin >> name;
					fin >> company;
					fin >> price;
					fin >> quantity;
					int _price, _quantity;
					sscanf_s(price,"%d",&_price);
					sscanf_s(quantity, "%d", &_quantity);
					//cout << name << company << price << quantity;

					ItemRegistration Registration(name,company, _price, _quantity,this->saleList,this->purchaseList,ID);
					//3.1 �Ǹ��Ƿ����
					break;
				}
				case 2:
				{
					//3.2 ��� ��ǰ ��ȸ
					ShowMyitems ShowItems(this->saleList);
					
					break;
				}
				case 3:
				{
					ShowSoldItems ShowsoldItem(this->saleList);
					//3.3 �Ǹ� �Ϸ� ��ǰ ��ȸ
					break;
				}
			}
			break;
		}
		case 4:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				char key[MAX_STRING];
				fin >> currentkey;
				ItemInfoSearch SearchItem(currentkey, this->purchaseList);
				IsSelected = SearchItem.IsExist;
				//4.1 ��ǰ ���� �˻�

				break;
			}
			case 2:
			{
				if (IsSelected) {
					PurchaseItem Purchaseitem(currentID, currentkey, this->purchaseList, this->base);
					currentkey = "";
				}
				//4.2 ��ǰ ����
				break;
			}
			case 3:
			{
				//4.3 ��ǰ ���� ���� ��ȸ
				break;
			}
			case 4:
			{
				
				//4.4 ��ǰ ���Ÿ����� ��
				break;
			}
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				//5.1�Ǹ� ��ǰ ���
				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1:
			{
			
				is_program_exit = 1;
				break;
			}
			}
			break;
		}
		}

	}
	return;
}

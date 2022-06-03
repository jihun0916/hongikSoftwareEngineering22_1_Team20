#include <iostream>
#include "ItemList.h"
#include "ItemRegistrationUI.h"
using namespace std;

//Class: ItemRegistration (Control Class)
//Description: 상품등록을 관리한다. Main 클래스로부터 상품의 이름,회사명,가격,수량 그리고 상품을 추가할 리스트(개인의 판매상품 목록과 전체 판매상품목록), 사용자 아이디를 매개로 받는다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

class ItemRegistration
{
public:
	ItemRegistration(char* _name, char* _company, int _price, int _quantity, int _satisfaction, ItemList& _list, ItemList& _totalList, string ID) {
		_IsCreated = _list.AddNewItem(_name, _company, _price, _quantity, _satisfaction, ID);

			//상품이 제대로 등록되었는 지 확인한다. 상품이 등록된 후에 바운더리 클래스를 작동하기 위함
			_totalList.AddNewItem(_name, _company, _price, _quantity, _satisfaction, ID); //전체 상품리스트에도 등록
			if (_IsCreated) { //잘 등록되었다면
				RegistUI.name = _name;
				RegistUI.company = _company;
				RegistUI.price = _price;
				RegistUI.quantity = _quantity;
				RegistUI.satisfaction = 0;

				//바운더리 클래스로 상품의 인자들을 넘긴다
				RegistUI.PrintOutput(); //그 후 출력, 출력은 바운더리 클래스 - ItemList - Item 의 함수 호출로 이루어진다.
				_IsCreated = false;
			}
		}

private:
	bool _IsCreated;
	ItemRegistrationUI RegistUI;
	/*
	string name, company;
	int price, quantity;*/
	};
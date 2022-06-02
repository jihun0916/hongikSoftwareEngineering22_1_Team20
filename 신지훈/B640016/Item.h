#pragma once
#include <iostream>
#include <fstream>

//Class:Item (Entity Class)
//Description: 이름,회사명,가격,수량,팔린개수,사용자ID(판매자) ,만족도,구매가능상태를 인자로 가지는 Item Class
// 인자를 출력하기, 구매시 수량 줄이고 구매가능 상태 체크하기, 인자 설정 함수가 있다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

using namespace std;
enum class state
{
	SELLABLE,
	UNSELLABLE

};
class Item
{
public:
	void SetElement(char* _name, char* _company, int _price, int _quantity, string ID);
	void TestPrint();
	void PrintElement(int menu1, int menu2);
	void ReduceQuantity() {
		if (currentstate == state::SELLABLE) {
			this->quantity--;
			this->sellCount++;
			if (quantity == 0)
				currentstate = state::UNSELLABLE;
		}
	}
	string GetItemName() { return name; }
	state currentstate = state::SELLABLE;
private:
	
	string name;
	string company;
	string ID;
	int price, quantity, sellCount = 0;
	int satisfaction = 0;
\
};


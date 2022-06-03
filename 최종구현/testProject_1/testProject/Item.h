#pragma once
#include <iostream>
#include <fstream>

using namespace std;
enum class state
{
	SELLABLE,
	UNSELLABLE

};
class Item
{
public:
	void SetElement(char* _name, char* _company, int _price, int _quantity, int _satisfaction, string ID);
	void TestPrint();
	void PrintElement(int menu1, int menu2);
	int getAverage(int satisfaction, int sellCount);
	void ReduceQuantity() {
		if (currentstate == state::SELLABLE) {
			this->quantity--;
			this->sellCount++;
			if (quantity == 0)
				currentstate = state::UNSELLABLE;
		}
	}
	void changeSatisfaction(int _satisfaction) { // 만족도 값 변경
		this->satisfaction = _satisfaction;
	}
	string GetItemName() { return name; }
	state currentstate = state::SELLABLE;
private:

	string name;
	string company;
	string ID;
	int price, quantity, sellCount = 0;
	int satisfaction = 0;
	
};
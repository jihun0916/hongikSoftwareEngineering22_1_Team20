#include "ItemList.h"

//Function:AddnewItem
//Description: 새로운 아이템을 생성한다.
//Parameter: 리스트, 키워드
//Return Value: boolean
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

bool ItemList::AddNewItem(char * _name, char* _company, int _price, int _quantity,string ID) {
	Item it ;
	it.SetElement(_name, _company, _price, _quantity,ID); //받은 인자로 생성한 오브젝트를 목록에 추가
	try 
	{ 
		this->Items.push_back(it); 
		this->size++; //리스트 사이즈 증가

		list<Item>::iterator iter;
		int count = 0;
		//for (iter = this->Items.begin(); iter != this->Items.end(); iter++) //디버깅을 위한 코드
		//{
		//	cout << count << endl;
		//	iter->TestPrint();
		//	count++;
		//}
		return true;
	}
	catch(exception e) //성공적으로 추가하지 못했다면 false반환
	{
		return false;
	}
}

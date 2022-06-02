#include "ItemList.h"

//Function:AddnewItem
//Description: ���ο� �������� �����Ѵ�.
//Parameter: ����Ʈ, Ű����
//Return Value: boolean
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

bool ItemList::AddNewItem(char * _name, char* _company, int _price, int _quantity,string ID) {
	Item it ;
	it.SetElement(_name, _company, _price, _quantity,ID); //���� ���ڷ� ������ ������Ʈ�� ��Ͽ� �߰�
	try 
	{ 
		this->Items.push_back(it); 
		this->size++; //����Ʈ ������ ����

		list<Item>::iterator iter;
		int count = 0;
		//for (iter = this->Items.begin(); iter != this->Items.end(); iter++) //������� ���� �ڵ�
		//{
		//	cout << count << endl;
		//	iter->TestPrint();
		//	count++;
		//}
		return true;
	}
	catch(exception e) //���������� �߰����� ���ߴٸ� false��ȯ
	{
		return false;
	}
}

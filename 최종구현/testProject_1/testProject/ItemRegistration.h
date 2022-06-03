#include <iostream>
#include "ItemList.h"
#include "ItemRegistrationUI.h"
using namespace std;

//Class: ItemRegistration (Control Class)
//Description: ��ǰ����� �����Ѵ�. Main Ŭ�����κ��� ��ǰ�� �̸�,ȸ���,����,���� �׸��� ��ǰ�� �߰��� ����Ʈ(������ �ǸŻ�ǰ ��ϰ� ��ü �ǸŻ�ǰ���), ����� ���̵� �Ű��� �޴´�.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
//mail: vv1663@naver.com

class ItemRegistration
{
public:
	ItemRegistration(char* _name, char* _company, int _price, int _quantity, int _satisfaction, ItemList& _list, ItemList& _totalList, string ID) {
		_IsCreated = _list.AddNewItem(_name, _company, _price, _quantity, _satisfaction, ID);

			//��ǰ�� ����� ��ϵǾ��� �� Ȯ���Ѵ�. ��ǰ�� ��ϵ� �Ŀ� �ٿ���� Ŭ������ �۵��ϱ� ����
			_totalList.AddNewItem(_name, _company, _price, _quantity, _satisfaction, ID); //��ü ��ǰ����Ʈ���� ���
			if (_IsCreated) { //�� ��ϵǾ��ٸ�
				RegistUI.name = _name;
				RegistUI.company = _company;
				RegistUI.price = _price;
				RegistUI.quantity = _quantity;
				RegistUI.satisfaction = 0;

				//�ٿ���� Ŭ������ ��ǰ�� ���ڵ��� �ѱ��
				RegistUI.PrintOutput(); //�� �� ���, ����� �ٿ���� Ŭ���� - ItemList - Item �� �Լ� ȣ��� �̷������.
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
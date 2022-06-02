#include "Item.h"

//Function:SetElement
//Description: Item Class�� ���ڸ� �������ش�.
//Parameter: �̸�, ȸ���, ����, ���� , �Ǹ���
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

void Item::SetElement(char* _name, char* _company, int _price, int _quantity,string	_ID)
{
	name = _name, company = _company, price = _price, quantity = _quantity, ID = _ID;
}

//Function:PrintElement
//Description: Item Class�� ���ڸ� ������ش�.
//Parameter: �Է� ���� 1,2 (������ ����)
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

void Item::PrintElement(int menu1, int menu2) {
	ofstream fout("output.txt", ios::app); //���Ͽ� ���
	if (menu1 == 0 && menu2 == 0) { //0.0 � ������� �������� �ʰ� �������� ���ڸ� ����ϰ� ���� ��
		fout << name << " " << company << " " << price << " " << quantity << endl;
	}
	else if (menu1 == 3 && menu2 == 3) { //3.3 �ǸſϷ� ��ǰ ��ȸ�� ����ϴ� �κ�, �ݺ�����ؾ� �ϹǷ� ���� ����� �����Ѵ�.
		fout << name << " " << company << " " << price << " " << sellCount << " " << satisfaction << endl;
	}
	else if (menu1 == 4 && menu2 == 1) {//4.1 ��ǰ ���� �˻� �� ���Ǵ� �κ�
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << ID << " " << name << " " << company << " " << price << " " << quantity << " " << satisfaction << endl;
	}
	else if (menu1 == 4 && menu2 == 2) {//4.2 ��ǰ ���� �� ���Ǵ� �κ�
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << ID <<" "<<name << endl;
	}
	else { //�⺻ ��� ��
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << name << " " << company << " " << price << " " << quantity << endl;
	}
	//cout << name << " " << company << " " << price << " " << quantity;
	//����� �� �ڵ�
}

//����׿� �Լ�
void Item::TestPrint(){
	cout << "Test Print: ";
	cout << name << "," << company << "," << price << "," << quantity << endl;
}


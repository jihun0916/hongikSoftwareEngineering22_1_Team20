#include "ItemRegistrationUI.h"

//Function:PrintOutput
//Description: 3.1 ����� �Ǹ��Ƿ��� ������ ����Ѵ�.
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

void ItemRegistrationUI::PrintOutput() {
	ofstream fout("output.txt", ios::app);
	fout << "3.1. �Ǹ� �Ƿ� ���" << endl;
	fout << ">" << " " << name << " " << company << " " << price << " " << quantity << endl;
	fout.close();
	//cout << name << " " << company << " " << price << " " << quantity << endl;
}
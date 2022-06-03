#include "Item.h"

void Item::SetElement(char* _name, char* _company, int _price, int _quantity, int _satisfaction, string	_ID)
{
	name = _name, company = _company, price = _price, quantity = _quantity, satisfaction= _satisfaction, ID = _ID;
	satisfaction = 0;
}


//Function:getAverage
//Description: �������� ����� ����Ͽ� ��ȯ�Ѵ�.
//Parameter: int satisfaction(������), int sellCount(�Ǹ� ��)
//Return Value: integer
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 ������

int Item::getAverage(int satisfaction, int sellCount) {
	int sum = 0;
	int average = 0;
	if (sellCount > 0) {
		for (int i = 0; i < sellCount; i++) {
			sum += satisfaction;
		}
		average = sum / sellCount;
		return average;
	}
	return 0;
}


void Item::PrintElement(int menu1, int menu2) {
	ofstream fout("output.txt", ios::app);
	//fprintf(out_fp, " > %s %s %d %d \n", name, company, price, quantity);
	//ofstream fout(OUTPUT_FILE_NAME);
	if (menu1 == 0 && menu2 == 0) {
		fout << ">" << " " << name << " " << company << " " << price << " " << quantity << endl;
	}
	else if (menu1 == 3 && menu2 == 3) {
		fout << menu1; fout << "."; fout << menu2; fout << "."; fout << "  �Ǹ� �Ϸ� ��ǰ ��ȸ" << endl;
		fout << ">" << " " << name << " " << company << " " << price << " " << sellCount << " " << satisfaction << endl;
	}
	else if (menu1 == 4 && menu2 == 1) {
		fout << menu1; fout << "."; fout << menu2; fout << "."; fout << " ��ǰ ���� �˻�" << endl;
		fout << ">" << " " << ID << " " << name << " " << company << " " << price << " " << quantity << " " << satisfaction << endl;
	}
	else if (menu1 == 4 && menu2 == 2) {
		fout << menu1; fout << "."; fout << menu2; fout << "."; fout << " ��ǰ ���� �˻�" << endl;
		fout << ">" << " " << ID << " " << name << endl;
	}
	else if (menu1 == 4 && menu2 == 3) {	// ���� ���� ���
		fout << "4.3. ��ǰ ���� ���� ��ȸ" << endl;
		int satisfactionAverage;
		satisfactionAverage = getAverage(satisfaction, sellCount);
		fout << ">" << " " << ID << " " << name << " " << company << " " << price << " " << quantity << " " << satisfactionAverage << endl;
	}
	else if (menu1 == 4 && menu2 == 4) {	// ������ �� ���
		fout << "4.4. ��ǰ ���Ÿ����� ��" << endl;
		fout << ">" << " " << ID << " " << name << " " << satisfaction << endl;
	}
	else if (menu1 == 5 && menu2 == 1) {	// ��� ���
		fout << "5.1. �Ǹ� ��ǰ ���" << endl;
		int satisfactionAverage, priceSum;
		priceSum = price * sellCount;
		satisfactionAverage = getAverage(satisfaction, sellCount);
		fout << ">" << " " << name << " " << priceSum << " " << satisfactionAverage << endl;
	}
	else {
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << name << " " << company << " " << price << " " << quantity << endl;
	}
}
void Item::TestPrint() {
	cout << "Test Print: ";
	cout << name << "," << company << "," << price << "," << quantity << endl;
}
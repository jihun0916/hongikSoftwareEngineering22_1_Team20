#include "Item.h"

void Item::SetElement(char* _name, char* _company, int _price, int _quantity,string	_ID)
{
	name = _name, company = _company, price = _price, quantity = _quantity, ID = _ID;
}


void Item::PrintElement(int menu1, int menu2) {
	ofstream fout("output.txt", ios::app);
	//fprintf(out_fp, " > %s %s %d %d \n", name, company, price, quantity);
	//ofstream fout(OUTPUT_FILE_NAME);
	if (menu1 == 0 && menu2 == 0) {
		fout << name << " " << company << " " << price << " " << quantity << endl;
	}
	else if (menu1 == 3 && menu2 == 3) {
		fout << name << " " << company << " " << price << " " << sellCount << " " << satisfaction << endl;
	}
	else if (menu1 == 4 && menu2 == 1) {
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << ID << " " << name << " " << company << " " << price << " " << quantity << " " << satisfaction << endl;
	}
	else if (menu1 == 4 && menu2 == 2) {
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << ID <<" "<<name << endl;
	}
	
	else {
		fout << menu1; fout << " "; fout << menu2; fout << " ";
		fout << name << " " << company << " " << price << " " << quantity << endl;
	}
	cout << name << " " << company << " " << price << " " << quantity;
}
void Item::TestPrint(){
	cout << "Test Print: ";
	cout << name << "," << company << "," << price << "," << quantity << endl;
}


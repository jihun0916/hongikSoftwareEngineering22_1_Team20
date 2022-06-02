#include "ItemRegistrationUI.h"

void ItemRegistrationUI::PrintOutput() {
	ofstream fout("output.txt",ios::app);
	fout << "3" << " " << "1"<< endl;
	fout << ">" << " " << name <<" "<<company <<" "<< price <<" "<< quantity << endl;
	fout.close();
	//cout << name << " " << company << " " << price << " " << quantity << endl;
}

#include "ItemRegistrationUI.h"

//Function:PrintOutput
//Description: 3.1 등록한 판매의류의 정보를 출력한다.
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

void ItemRegistrationUI::PrintOutput() {
	ofstream fout("output.txt",ios::app);
	fout << "3" << " " << "1"<< endl;
	fout << ">" << " " << name <<" "<<company <<" "<< price <<" "<< quantity << endl;
	fout.close();
}

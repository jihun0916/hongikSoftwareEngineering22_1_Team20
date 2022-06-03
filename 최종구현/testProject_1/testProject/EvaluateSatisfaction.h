#pragma once
#include "Main.h"
#include "EvaluateSatisfactionUI.h"
#include <iostream>
using namespace std;

//Class: EvaluateSatisfation (Control Class)
//Description: 만족도 값 변경을 제어한다. 바운더리 클래스로 값을 넘긴다.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 정서연
//mail: 0324_j@g.hongik.ac.kr

class EvaluateSatisfation {
public:
	EvaluateSatisfation(string keyword, ItemList& _list, int _satisfaction) { 
		IsExist = myUI.evaluteItem(_list, keyword, _satisfaction);	
	}
	bool IsExist = false;
private:
	EvaluateSatisfactionUI myUI;
};
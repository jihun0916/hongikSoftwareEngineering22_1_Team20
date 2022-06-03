#pragma once
#include <iostream>
#include <cstdio>
#include <map>
#include "ItemList.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//Class: Main
//Description: ��� �������� �����ϰ� Input.txt�� ó�� 2���ڷ� �ùٸ� ��Ʈ�� Ŭ������ ��Ī��Ų��.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
//mail: vv1663@naver.com

using namespace std;

class Main {
public:
	void Run();
private:
	ItemList purchaseList; //����ڰ� ������ �� �ִ� ��ǰ��� ��ü DB�� ����� ����
	map<string, ItemList> saleList; //����ڰ� �Ǹ��ϴ� ��ǰ��� <����� ID, ����Ʈ>
	map<string, ItemList> base; //����ڰ� ������ ��ǰ ���� <����� ID, ����Ʈ>
};

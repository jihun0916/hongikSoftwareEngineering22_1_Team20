#pragma once
#include "Main.h"
#include "ShowSoldItemsUI.h"

//Class: ShowSolditems (Control Class)
//Description: �ǸſϷ�� �����۸���Ʈ�� ����ϵ��� �����Ѵ�. �ٿ����Ŭ������ ���� �Ѱ��ش�.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
//mail: vv1663@naver.com

class ShowSoldItems
{public:
	ShowSoldItems(ItemList& _list) {
		myUI.PrintSoldItems(_list);
	}
private:
	ShowSoldItemsUI myUI;
};


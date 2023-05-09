#ifndef _GOODS_H_
#define _GOODS_H_

#define HPPROP    200
#define ATTPROP   20
#define DEFPROP   20
#define EXPPROP   40
#define GOLDPROP  10

#include<string>
#include"Vec2.h"
#include"GameMap.h"

/*
���ݳ�Ա���μӵ�����ֵ�����ƣ����ͣ�����
��    Ϊ����Ⱦ��ǰ����ֵ��
*/


class Goods {
protected:
	short m_Abv;
	string m_Name;
	MAPELEMENT m_Element;
	Vec2 m_Pos;
public:
	Goods(MAPELEMENT element);

	short GetAbv();

	void SetAbv(short Abv);

};

#endif // !_GOODS_H_

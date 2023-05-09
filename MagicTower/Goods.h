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
数据成员：参加的属性值，名称，类型，坐标
行    为：渲染当前属性值，
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

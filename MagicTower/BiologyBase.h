#ifndef _BIOLOGYBASE_H_
#define _BIOLOGYBASE_H_
#include<iostream>
#include<string>
#include"Vec2.h"
using namespace std;

/*
数据成员：名称，等级，血量，攻击，防御
行为：攻击，属性调整
*/

class BiologyBase {
protected:
	string m_Name;
	short m_Lv;
	short m_Hp;
	short m_Att;
	short m_Def;
	Vec2 m_Pos;
public:
	// 基本渲染
	void render();

	void SetHp(short Hp);
	void SetAtt(short Att);
	void SetDef(short Def);

	short GetHp()const;
	short GetAtt()const;
	short GetDef()const;

};

#endif // !_BIOLOGYBASE_H_

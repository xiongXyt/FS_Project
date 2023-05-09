#ifndef _BIOLOGYBASE_H_
#define _BIOLOGYBASE_H_
#include<iostream>
#include<string>
#include"Vec2.h"
using namespace std;

/*
���ݳ�Ա�����ƣ��ȼ���Ѫ��������������
��Ϊ�����������Ե���
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
	// ������Ⱦ
	void render();

	void SetHp(short Hp);
	void SetAtt(short Att);
	void SetDef(short Def);

	short GetHp()const;
	short GetAtt()const;
	short GetDef()const;

};

#endif // !_BIOLOGYBASE_H_

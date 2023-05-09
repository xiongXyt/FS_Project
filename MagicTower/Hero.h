#ifndef _HERO_H_
#define _HERO_H_
#include"Vec2.h"
#include"Monster.h"
#include<iostream>
#include<string>
using namespace std;

/*
���ݣ��ȼ���Ѫ������ң����飬���꣬����
��Ϊ���ƶ�����������ȡװ��
*/

class Hero {
private:
	short m_Lv;
	short m_Hp;
	short m_Att;
	short m_Def;
	short m_Gold;
	short m_Exp;
	string m_Name;
	Vec2  m_Pos;
public:
	Hero();

	void SetHeroPosition(const Vec2& pos);
	Vec2 GetHeroPosition();

	bool Attack(Monster& monster);
	void HeroRender();
	void HeroPosEcg(const Vec2& otherpos);

	short GetHp()const;
	short GetAtt()const;
	short GetDef()const;
	short GetGold()const;
	short GetExp()const;

	void SetLv(short Lv);
	void SetHp(short Hp);
	void SetAtt(short Att);
	void SetDef(short Def);
	void SetGold(short Gold);
	void SetExp(short Exp);

};

#endif // !_HERO_H_

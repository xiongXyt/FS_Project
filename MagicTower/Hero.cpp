#include"Hero.h"

Hero::Hero() {
	m_Lv = 1;
	m_Hp = 1000;
	m_Att = 30;
	m_Def = 30;
	m_Gold = 0;
	m_Exp = 1;
	m_Name = "熊";
}

void Hero::SetHeroPosition(const Vec2& pos) {
	this->m_Pos = pos;
}

Vec2 Hero::GetHeroPosition() {
	return this->m_Pos;
}

bool Hero::Attack(Monster& monster) {
	short survival = 0;
	short toDamage = 0;
	short fromDamage = 0;
	while (true) {
		// 渲染
		monster.render();
		this->HeroRender();

		// 英雄进攻怪物 ( Att - Def )
		if ((this->m_Att + 5) > monster.GetAtt()) {
			toDamage = this->m_Att + 5 - monster.GetAtt();
		}
		else {
			toDamage = 5;
		}
		survival = monster.GetHp() - toDamage;
		if (survival > 0) {  // 存活
			monster.SetHp(survival);
			cout << "造成 : " << toDamage << endl;
		}
		else {  // 杀死怪物
			monster.SetHp(0);
			return true;
		}
		// 怪物进攻英雄 ( Att - Def )
		if ((monster.GetAtt() + 5) > this->m_Def) {
			fromDamage = monster.GetAtt() + 5 - this->m_Def;
		}
		else {
			fromDamage = 5;
		}
		survival = this->m_Hp - fromDamage;
		if (survival > 0) {
			this->m_Hp = survival;
			cout << "遭受 : " << fromDamage << endl;
		}
		else {  // 被怪物杀死
			this->m_Hp = 0;
			return false;
		}
	}
}

void Hero::HeroRender() {
	cout << "********************" << endl; // 20
	cout << "** 姓名：   " << this->m_Name << "    **" << endl;
	cout << "** 等级：   " << this->m_Lv << "     **" << endl;
	cout << "** 血量：   " << this->m_Hp << "  **" << endl;
	cout << "** 攻击：   " << this->m_Att << "     **" << endl;
	cout << "** 防御：   " << this->m_Def << "     **" << endl;
	cout << "** 金币：   " << this->m_Gold << "     **" << endl;
	cout << "** 经验：   " << this->m_Exp << "     **" << endl;
	cout << "********************" << endl;
}

void Hero::HeroPosEcg(const Vec2& otherpos) {
	// 这个就放在这里吧，还不知道可不可行
}

short Hero::GetHp()const {
	return this->m_Hp;
}

short Hero::GetAtt()const {
	return this->m_Att;
}

short Hero::GetDef()const {
	return this->m_Def;
}

short Hero::GetGold()const {
	return this->m_Gold;
}

short Hero::GetExp()const {
	return this->m_Exp;
}

void Hero::SetLv(short Lv) {
	this->m_Lv = Lv;
}

void Hero::SetHp(short Hp) {
	this->m_Hp = Hp;
}

void Hero::SetAtt(short Att) {
	this->m_Att = Att;
}

void Hero::SetDef(short Def) {
	this->m_Def = Def;
}

void Hero::SetGold(short Gold) {
	this->m_Gold = Gold;
}

void Hero::SetExp(short Exp) {
	this->m_Exp = Exp;
}



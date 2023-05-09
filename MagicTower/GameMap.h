#ifndef _GAMEMAP_H_
#define _GAMEMAP_H_

#include<iostream>
#include<string>
#include"Vec2.h"
using namespace std;

/*
1.�������ݣ��С��С���ͼ����������ǰ��ͼ���кš���ͼָ�룩
2.�����������졢��������Ⱦ����ȡӢ�����꣩
*/

#define ROW 15
#define COL 15
#define MAPSIZE 3

// ��ͼԪ��ö��
enum  MAPELEMENT {
	ROAD=0,
	WALL=1,
	HERO=2,
	UP = 7,
	DOWN = 8,

	// �����ͼ���
	LITTLE_MONSTER = 11,
	MIDDLE_MONSTER = 12,
	BIG_MONSTER = 13,
	BOSS_MONSTER = 14,

	// ��Ʒ��ͼ���
	TOHP = 15,
	TOATT = 16,
	TODEF = 17,
	TOEXP = 18,
	TOGOLD = 19
};

class GameMap {
private:
	short m_row;
	short m_col;
	short m_MapIndex;
	short m_mapSize;
	short(*m_pMap)[ROW][COL];

public:
	GameMap();
	~GameMap();
	// ��Ⱦ
	void GameMapRender();
	// ����Ӣ�۵�����
	Vec2 GetPositionOfHero() const;
	// ����ָ��λ�õ�Ԫ��ֵ
	MAPELEMENT GetElementOfPos(const Vec2& pos) const;
	// �޸�ָ��λ��Ϊָ��Ԫ��
	void UpdateElementOfPos(const Vec2& pos, MAPELEMENT e);
	// ��¥
	void GoUpstairs();
	// ��¥
	void GoDown();
};

#endif // !_GAMEMAP_H_

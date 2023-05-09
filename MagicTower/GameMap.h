#ifndef _GAMEMAP_H_
#define _GAMEMAP_H_

#include<iostream>
#include<string>
#include"Vec2.h"
using namespace std;

/*
1.抽象数据（行、列、地图总数量、当前地图序列号、地图指针）
2.抽象函数（构造、析构、渲染、获取英雄坐标）
*/

#define ROW 15
#define COL 15
#define MAPSIZE 3

// 地图元素枚举
enum  MAPELEMENT {
	ROAD=0,
	WALL=1,
	HERO=2,
	UP = 7,
	DOWN = 8,

	// 怪物地图标记
	LITTLE_MONSTER = 11,
	MIDDLE_MONSTER = 12,
	BIG_MONSTER = 13,
	BOSS_MONSTER = 14,

	// 物品地图标记
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
	// 渲染
	void GameMapRender();
	// 返回英雄的坐标
	Vec2 GetPositionOfHero() const;
	// 返回指定位置的元素值
	MAPELEMENT GetElementOfPos(const Vec2& pos) const;
	// 修改指定位置为指定元素
	void UpdateElementOfPos(const Vec2& pos, MAPELEMENT e);
	// 上楼
	void GoUpstairs();
	// 下楼
	void GoDown();
};

#endif // !_GAMEMAP_H_

#include"GameMap.h"

// ��ʼ����ͼָ������ݳ�Ա
GameMap::GameMap() :m_mapSize(MAPSIZE) {
	short map[MAPSIZE][ROW][COL] = {
		{
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
			1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 1,
			1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1,
			1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
			1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
			1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
			1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1,
			1, 0, 0, 12, 0, 0, 15, 0, 1, 0, 1, 0, 0, 0, 1,
			1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 1, 0, 1, 11,1, 0, 0, 0, 0, 0, 1,
			1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1,
			1, 0, 1, 0, 0, 0, 1, 2, 1, 0, 0, 0, 0, 0, 1,
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
		},
		{
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 8, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 7, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
		},
		{
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 8, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
			1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
		}
	};

	this->m_row = ROW;
	this->m_col = COL;
	this->m_MapIndex = 0;
	m_pMap = new short[MAPSIZE][ROW][COL];
	memcpy(m_pMap, map, sizeof(map));
}

GameMap::~GameMap() {
	// ������ڴ��ͷ��������ģ����Կ��������ͷ�
	delete[]m_pMap;
	m_pMap = nullptr;
}

// ��Ⱦ��ͼ
void GameMap::GameMapRender() {
	for (short i = 0; i < ROW; ++i) {
		for (short j = 0; j < COL; ++j) {
			switch (m_pMap[m_MapIndex][i][j]) {
			case ROAD:
				cout << "  ";
				break;
			case WALL:
				cout << "��";
				break;
			case HERO:
				cout << "��";
				break;
			case UP:
				cout << "��";
				break;
			case DOWN:
				cout << "��";
				break;
			case LITTLE_MONSTER:
				cout << "��";
				break;
			case MIDDLE_MONSTER:
				cout << "��";
				break;
			case TOHP:
				cout << "��";
				break;
			case TOATT:
				cout << "��";
				break;
			case TODEF:
				cout << "��";
				break;
			case TOEXP:
				cout << "��";
				break;
			}
		}
		cout << endl;
	}
}

Vec2 GameMap::GetPositionOfHero() const {
	for (short i = 0; i < ROW; ++i) {
		for (short j = 0; j < COL; ++j) {
			if (2 == m_pMap[m_MapIndex][i][j]) {
				return Vec2(i, j);
			}
		}
	}
	return Vec2();
}

MAPELEMENT GameMap::GetElementOfPos(const Vec2& pos) const {
	return (MAPELEMENT)(m_pMap[m_MapIndex][pos.GetX()][pos.GetY()]);
}

void GameMap::UpdateElementOfPos(const Vec2& pos, MAPELEMENT  e) {
	m_pMap[m_MapIndex][pos.GetX()][pos.GetY()] = e;
}

void GameMap::GoUpstairs() {
	++m_MapIndex;
}

void GameMap::GoDown() {
	--m_MapIndex;
}
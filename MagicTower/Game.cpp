#include"Game.h"

void Game::GameInit() {
	m_hero.SetHeroPosition(m_gameMap.GetPositionOfHero());
}

void Game::GameRender() {
	system("CLS");
	// ��ȾӢ����Ϣ
	m_hero.HeroRender();
	// ��Ⱦ������ͼ��Ϣ
	m_gameMap.GameMapRender();
	GameUpdate();
}

void Game::KeyboardListener() {
	char signal = _getch();  // ����������
	Vec2 dir;
	switch (signal) {
	case 'w':
	case 'W':
		dir = Vec2::UP;
		break;
	case 's':
	case 'S':
		dir = Vec2::DOWN;
		break;
	case 'a':
	case 'A':
		dir = Vec2::LEFT;
		break;
	case 'd':
	case 'D':
		dir = Vec2::RIGHT;
		break;
	}
	Vec2 nextPos = dir + m_hero.GetHeroPosition();
	MAPELEMENT element = m_gameMap.GetElementOfPos(nextPos);


	switch (element) {
	case ROAD: {  // �յ�
		// �޸ĵ�ͼ
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��

		// ����Ӣ��λ��
		m_hero.SetHeroPosition(nextPos);
		break;
	}

	case UP: {  // ��¥��
		// ������һ�ŵ�ͼ
		m_gameMap.GoUpstairs();
		m_hero.SetHeroPosition(m_gameMap.GetPositionOfHero());
		break;
	}

	case DOWN: {  // ��¥��
		// ������һ�ŵ�ͼ
		m_gameMap.GoDown();
		m_hero.SetHeroPosition(m_gameMap.GetPositionOfHero());
		break;
	}

	case LITTLE_MONSTER: {  // С����
		// ��ʼ��С����
		Monster littleMonster(element);
		int num = 0;

		// Ӣ�ۺ͹������ս������������
		// Ӣ����ȥս��
		if (this->m_hero.Attack(littleMonster)) {
			cout << "ʤ��" << endl;
			cout << "�밲�����ȷ��" << endl;
			char determine = _getch();

			// ��ǰ��
			m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
			m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
			// ����Ӣ��λ��
			m_hero.SetHeroPosition(nextPos);
		}
		else {
			cout << "��Ӯ" << endl;
			//  ��Ϸ����
			exit(0);
		}
		break;
	}

	case MIDDLE_MONSTER: {  // �еȹ���
		// ��ʼ���еȹ���
		Monster MiddleMonster(element);

		// Ӣ�ۺ͹������ս������������
		// Ӣ����ȥս��
		if (this->m_hero.Attack(MiddleMonster)) {
			cout << "ʤ��" << endl;
			cout << "�밲�����ȷ��" << endl;
			char determine = _getch();

			// ��ǰ��
			m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
			m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
			// ����Ӣ��λ��
			m_hero.SetHeroPosition(nextPos);
		}
		else {
			cout << "��Ӯ" << endl;
			//  ��Ϸ����
			exit(0);
		}
		break;
	}

	case BIG_MONSTER: {  // �����
		// ��ʼ�������
		Monster BigMonster(element);

		// Ӣ�ۺ͹������ս������������
		// Ӣ����ȥս��
		if (this->m_hero.Attack(BigMonster)) {
			cout << "ʤ��" << endl;
			cout << "�밲�����ȷ��" << endl;
			char determine = _getch();

			// ��ǰ��
			m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
			m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
			// ����Ӣ��λ��
			m_hero.SetHeroPosition(nextPos);
		}
		else {
			cout << "��Ӯ" << endl;
			//  ��Ϸ����
			exit(0);
		}
		break;
	}

	case BOSS_MONSTER: {  // ����Boss�����־����Ϸʤ�� flag = true
		// ��ʼ��BOSS����
		Monster BossMonster(element);

		// Ӣ�ۺ͹������ս������������
		// Ӣ����ȥս��
		if (this->m_hero.Attack(BossMonster)) {
			cout << "ʤ��" << endl;
			cout << "�밲�����ȷ��" << endl;
			char determine = _getch();

			// ��ǰ��
			m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
			m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
			// ����Ӣ��λ��
			m_hero.SetHeroPosition(nextPos);
		}
		else {
			cout << "��Ӯ" << endl;
			//  ��Ϸ����
			exit(0);
		}
		break;
	}

	case TOHP: {  // ��Ѫ����Ʒ
		Goods fromHP(element);
		m_hero.SetHp(m_hero.GetHp() + fromHP.GetAbv());

		// ��ǰ��
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
		// ����Ӣ��λ��
		m_hero.SetHeroPosition(nextPos);
		break;
	}

	case TOATT: {  // �ӹ�����Ʒ
		Goods fromATT(element);
		m_hero.SetHp(m_hero.GetAtt() + fromATT.GetAbv());

		// ��ǰ��
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
		// ����Ӣ��λ��
		m_hero.SetHeroPosition(nextPos);
		break;
	}

	case TODEF: {  // �ӷ�����Ʒ
		Goods fromDEF(element);
		m_hero.SetHp(m_hero.GetDef() + fromDEF.GetAbv());

		// ��ǰ��
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
		// ����Ӣ��λ��
		m_hero.SetHeroPosition(nextPos);
		break;
	}

	case TOEXP: {  // �Ӿ�����Ʒ
		Goods fromEXP(element);
		m_hero.SetHp(m_hero.GetExp() + fromEXP.GetAbv());

		// ��ǰ��
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
		// ����Ӣ��λ��
		m_hero.SetHeroPosition(nextPos);
		break;
	}
	case TOGOLD: {
		Goods fromGOLD(element);
		m_hero.SetHp(m_hero.GetGold() + fromGOLD.GetAbv());

		// ��ǰ��
		m_gameMap.UpdateElementOfPos(nextPos, HERO);  // ��һ��λ��
		m_gameMap.UpdateElementOfPos(m_hero.GetHeroPosition(), ROAD);  // ��ǰλ��
		// ����Ӣ��λ��
		m_hero.SetHeroPosition(nextPos);
		break;
	}
	}
}

void Game::GameUpdate() {
	KeyboardListener();
}


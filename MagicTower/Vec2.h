#ifndef _VECTWO_H_
#define _VECTWO_H_

/*
���ݣ�X�ᣬY��
��Ϊ����ȡ���꣬��������
*/

class Vec2 {
private:
	short m_X;
	short m_Y;
public:
	Vec2();
	Vec2(short x, short y);
	//~Vec2();

	short GetX()const;
	short GetY()const;
	Vec2 GetXY()const;

	// ���� + �����
	Vec2 operator+(const Vec2& other);

	// Ԥ�������
	static const Vec2 UP;
	static const Vec2 DOWN;
	static const Vec2 LEFT;
	static const Vec2 RIGHT;
};

#endif // !_VECTWO_H_

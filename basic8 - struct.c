#include<stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
};	

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
}	GAME_INFO;

int main(void)
{
	// ����ü

	// [���� ���]
	// �̸� : ��������
	// �߸ų⵵ : 2017��
	// ���� : 50��
	// ���ۻ� : ����ȸ��

	char* name = "��������";
	int year = 2017;
	int price = 50;
	char* comapny = "����ȸ��";

	// [�Ǵٸ� ���� ���]
	// �̸� : �ʵ�����
	// �߸ų⵵ : 2017��
	// ���� : 100��
	// ���ۻ� : �ʵ�ȸ��

	char* name2 = "��������";
	int year2 = 2017;
	int price2 = 100;
	char* comapny2 = "����ȸ��";

	// ����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	// ����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("  ���Ӹ�    : %s\n", gameInfo1.name);
	printf("  �߸ų⵵  : %d\n", gameInfo1.year);
	printf("  ����      : %d\n", gameInfo1.price);
	printf("  ���ۻ�    : %s\n", gameInfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = { "�ʵ�����", 2017, 100, "�ʵ�ȸ��" };
	printf("-- �Ǵٸ� ���� ��� ���� --\n");
	printf("  ���Ӹ�    : %s\n", gameInfo2.name);
	printf("  �߸ų⵵  : %d\n", gameInfo2.year);
	printf("  ����      : %d\n", gameInfo2.price);
	printf("  ���ۻ�    : %s\n", gameInfo2.company);

	// ����ü �迭
	struct GameInfo gameArray[2] = {
	{"��������", 2017, 50, "����ȸ��"} ,
	{"�ʵ�����", 2017, 100, "�ʵ�ȸ��"}
	};

	// ����ü ������
	struct GameInfo* gamePtr;	
	gamePtr = &gameInfo1;	
	printf("\n\n-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("  ���Ӹ�    : %s\n", (*gamePtr).name);
	printf("  �߸ų⵵  : %d\n", (*gamePtr).year);
	printf("  ����      : %d\n", (*gamePtr).price);
	printf("  ���ۻ�    : %s\n", (*gamePtr).company);

	// �ٸ����
	printf("  ���Ӹ�    : %s\n", gamePtr->name);
	printf("  �߸ų⵵  : %d\n", gamePtr->year);
	printf("  ����      : %d\n", gamePtr->price);
	printf("  ���ۻ�    : %s\n", gamePtr->company);

	// ����ü ���� ����ü
	// ���� ��ü ���� �Ұ�
	gameInfo1.friendGame = &gameInfo2;		
	printf("\n\n-- ���� ��ü�� ���� ��� ���� --\n");
	printf("  ���Ӹ�    : %s\n", gameInfo1.friendGame->name);
	printf("  �߸ų⵵  : %d\n", gameInfo1.friendGame->year);
	printf("  ����      : %d\n", gameInfo1.friendGame->price);
	printf("  ���ۻ�    : %s\n", gameInfo1.friendGame->company);

	// typedef
	// �ڷ����� ����(�̸�) ����
	int i = 1;
	typedef int ����;
	���� �������� = 3;
	typedef float �Ǽ�;
	�Ǽ� �Ǽ����� = 3.23f;
	printf("\n�������� : %d, �Ǽ����� %.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2015;

	// �ٸ����
	GAME_INFO game2;
	game2.name = "�ѱ۰���";
	game2.year = 2014;
	

	return 0;
}
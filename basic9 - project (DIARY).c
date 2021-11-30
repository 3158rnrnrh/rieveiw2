#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 프로젝트
// 비밀번호를 입력 받아서
// 맞는 경우? 일기를 읽어와서 보여주고 계쏙 작성하도록 한다
// 틀린경우? 경고 메세지를 표시하고 종료

#define MAX 10000

int main(void)
{
	// fgets, fputs 활용
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c;

	printf("'비밀일기'에 오신 것을 환영합니다\n");
	printf("비밀번호를 입력하세요 : ");

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13)		
		{
			password[i] = '\0';
			break;			
		}
		else				
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// 비밀번호 : 나도코딩 'skehzheld'
	printf("\n\n === 비밀번호 확인 중... ===\n\n");
	if (strcmp(password, "skehzheld") == 0)		
	{
		printf(" === 비밀번호 확인 완료 === \n\n");
		char* fileName = "c:\\seretdiary.txt";
		FILE* file = fopen(fileName, "a+b");	
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n 내용을 계속 작성하세요 ! 종료하시려면 EXIT 를 입력하세요\n\n");

		while (1)
		{
			scanf_s("%[^\n]", contents);		
			getchar();

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("비밀일기 입력을 종료합니다\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);		// Enter를 위에서 무시 처리 하였으므로 임의로 추가
		}
		fclose(file);
	}
	else
	{
		printf(" === 비밀번호가 틀렸어요 ===\n\n");
		printf("당신 누구야!\n\n\n");
	}
	return 0;
}
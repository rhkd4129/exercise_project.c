#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#include <windows.h>

struct h_rice h_rice_1;
struct rice rice_1;
struct chicken chicken_1;

 
int body[4]; //;성별, 나이, 키,몸무게
float  basal_Metablism; //기초대사량
int food_number[10];   //음식번호
int menu = 0;       //메뉴번호
int number = 0;


void gotoxy(int x, int y)
{
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void clear(void) {  
	system("cls");
}

float basal(int * body) 
{ 

	while (1) {
		printf("성별을 입력하세요(1.남자/ 2.여자)");
		scanf("%d", &body[0]);
		if (body[0] != 1 && body[0] != 2)
		{
			printf("잘못입력했습니다, 다시 입력하세요");
		}
		else break;
	}
	printf("소수점아래는 제외하세요.\n");
	printf("나이를 입력하세요");
	scanf("%d", &body[1]);

	printf("키를 입력하세요");
	scanf("%d", &body[2]);

	printf("몸무게를 입력하세요");
	scanf("%d", &body[3]);

	if (body[0] == 1) {
		basal_Metablism = 66.47 + (13.75 * body[3]) + (5 * body[2]) - (6.76 * body[1]);
	}
	else if (body[0] == 2) {
		basal_Metablism = 665.1 + (9.56 * body[3]) + (1.85 * body[2]) - (4.68 * body[1]);
	}
	
	return  basal_Metablism;
	
}

void food_list(void) {
		gotoxy(90, 0); 
		printf("(단위가 없는것은 100g씩) \n");
		gotoxy(90, 1);
		printf("1. 현미밥 \n");
		gotoxy(90, 2);
		printf("2 .쌀밥\n");
		gotoxy(90, 3);
		printf("3. 닭가슴살\n");
		gotoxy(90, 4);
		printf("4. 단백질 쉐이크 (한스쿱)\n");
		gotoxy(90, 5);
		printf("5. 삶은달걀 (1개)\n");
}


void eat_list(int* food_number) {
	food_list();
	printf("오른쪽  음식 목록에서 본인이 먹은 음식은 몇가지 ?");
	scanf("%d\n", &number);
	printf("먹은 음식들의 번호를 입력하세요(순서대로)");
	for (int i = 0; i < number; i++) {
		scanf("%d", &food_number[i]);
	}

	
	sleep(100);


}



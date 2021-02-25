#include "header.h"
#include <stdio.h>


void gotoxy(int x, int y);

float basal(int* body); //기초대사량 계산
void clear(void);	//화면지우기
void food_list(void);// 음식리스트
extern  int body[4]; //;성별, 나이, 키,몸무게
extern float basal_Metablism; //기초대사량


extern int menu = 0;
extern int food_number[10];



int main() {

	
	printf("1.기초대사량 계산\n");
	printf("2. 아침\n");
	printf("3. 점심\n");
	printf("4. 저녁\n");
	printf("5. 간식\n");
	printf("6. 오늘 총 영양소\n");
	printf("7. 종료\n\n\n");


	printf("입력 :");
	scanf("%d", &menu);
	if (menu == 1) {
		printf("당신의 기초대사량은 %f Kcal \n", basal(body));
	}
	else if (menu == 2) {
		
	}
	else if (menu == 3) {

	}
	else if (menu == 4) {

	}
	/*else if (menu == 5) {

	}
	else if (menu == 6) {

	}
	else if (menu == 7) {

	}
	else if (menu == 8){
	}

	*/
	


	

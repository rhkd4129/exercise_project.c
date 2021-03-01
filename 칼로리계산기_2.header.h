#ifndef _ABC_
#define _ABC_

typedef struct {

	char food_name[15]; //음식이름
	int pretein;  //단백질
	int tansu;    //탄수화물
	int fat;	// 지방
}name;

name food_content[10];


food_content[10] = { //음식들의 영양성분
	{"h_Rice",20,20,20},  //현미밥
	{"rine",20,20,20},	//쌀밥
	{"ckin",20,20,20},  //닭가슴살
	{"protein_shake",20,20,20}			//단백질쉐이크 
						
}; 
int body[4];  //성별,나이,키, 몸무게
float basal_Metablism; //기초대사량


void gotoxy(int x, int y);
void clear(void);						//화면지우기
float basal(int* body);					// 기초대사량 계산기
void food_list(void);					//음식 목록
void eat_list(void);                    //먹은 음식 기입

#endif

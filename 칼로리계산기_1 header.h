#ifndef _HEADER_H
#define _HEADER_H

// 현미밥
struct h_rice {
	int protein;	// 단백질
	int tansu;		//탄수화물
	int fat;        //지방
};

// 쌀밥
struct rice {
	int protein;
	int tansu;
	int fat;
};

// 닭가슴살
struct chicken {
	int protein;
	int tansu;
	int fat;
};

// 단백질 쉐이크
struct protein_shake {
	int protein;
};

// 삶은계란
struct egg {
	int protein;
	int tansu;
	int fat;
};



#endif

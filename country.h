#pragma once

struct country {
	int love[10] = { 0, };

	int ecnm_lv = 3;
	int ecnm_exp = 0;

	int mil_lv = 4;
	int mil_exp = 0;

	int cult_lv = 3;
	int cult_exp = 0;

	int hum_lv = 2;
	int hum_exp = 0;

	int sci_lv = 3;
	int sci_exp = 0;

	int pop_lv = 3;
	int pop_exp = 0;
};

typedef struct China : country {
	int love[10] = { 0, };

	int ecnm_lv = 5;
	int ecnm_exp = 0;

	int mil_lv = 4;
	int mil_exp = 0;

	int cult_lv = 4;
	int cult_exp = 0;

	int hum_lv = 1;
	int hum_exp = 0;

	int sci_lv = 4;
	int sci_exp = 0;

	int pop_lv = 5;
	int pop_exp = 0;
}china;

typedef struct Japen : country {
	int love[10] = { 0, };

	int ecnm_lv = 4;
	int ecnm_exp = 0;

	int mil_lv = 4;
	int mil_exp = 0;

	int cult_lv = 4;
	int cult_exp = 0;

	int hum_lv = 2;
	int hum_exp = 0;

	int sci_lv = 4;
	int sci_exp = 0;

	int pop_lv = 4;
	int pop_exp = 0;
}japen;

typedef struct Usa : country {
	int love[10] = { 0, };

	int ecnm_lv = 5;
	int ecnm_exp = 0;

	int mil_lv = 5;
	int mil_exp = 0;

	int cult_lv = 5;
	int cult_exp = 0;

	int hum_lv = 5;
	int hum_exp = 0;

	int sci_lv = 4;
	int sci_exp = 0;

	int pop_lv = 3;
	int pop_exp = 0;
}usa;

typedef struct Rusia : country {
	int love[10] = { 0, };

	int ecnm_lv = 2;
	int ecnm_exp = 0;

	int mil_lv = 3;
	int mil_exp = 0;

	int cult_lv = 1;
	int cult_exp = 0;

	int hum_lv = 1;
	int hum_exp = 0;

	int sci_lv = 3;
	int sci_exp = 0;

	int pop_lv = 2;
	int pop_exp = 0;
}rusia;

typedef struct Eu : country {
	int love[10] = { 0, };

	int ecnm_lv = 4;
	int ecnm_exp = 0;

	int mil_lv = 2;
	int mil_exp = 0;

	int cult_lv = 4;
	int cult_exp = 0;

	int hum_lv = 5;
	int hum_exp = 0;

	int sci_lv = 5;
	int sci_exp = 0;

	int pop_lv = 4;
	int pop_exp = 0;
}eu;

typedef struct Sea : country {
	int love[10] = { 0, };

	int ecnm_lv = 2;
	int ecnm_exp = 0;

	int mil_lv = 2;
	int mil_exp = 0;

	int cult_lv = 2;
	int cult_exp = 0;

	int hum_lv = 3;
	int hum_exp = 0;

	int sci_lv = 1;
	int sci_exp = 0;

	int pop_lv = 4;
	int pop_exp = 0;
}sea;

typedef struct India : country {
	int love[10] = { 0, };

	int ecnm_lv = 3;
	int ecnm_exp = 0;

	int mil_lv = 2;
	int mil_exp = 0;

	int cult_lv = 2;
	int cult_exp = 0;

	int hum_lv = 1;
	int hum_exp = 0;

	int sci_lv = 4;
	int sci_exp = 0;

	int pop_lv = 5;
	int pop_exp = 0;
}india;

typedef struct Hoju : country {
	int love[10] = { 0, };

	int ecnm_lv = 2;
	int ecnm_exp = 0;

	int mil_lv = 1;
	int mil_exp = 0;

	int cult_lv = 2;
	int cult_exp = 0;

	int hum_lv = 4;
	int hum_exp = 0;

	int sci_lv = 2;
	int sci_exp = 0;

	int pop_lv = 2;
	int pop_exp = 0;
}hoju;

typedef struct Nammi : country {
	int love[10] = { 0, };

	int ecnm_lv = 2;
	int ecnm_exp = 0;

	int mil_lv = 1;
	int mil_exp = 0;

	int cult_lv = 3;
	int cult_exp = 0;

	int hum_lv = 2;
	int hum_exp = 0;

	int sci_lv = 1;
	int sci_exp = 0;

	int pop_lv = 4;
	int pop_exp = 0;
}nammi;
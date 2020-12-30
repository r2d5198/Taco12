#ifndef taco_H
#define taco_H

#include "quantum.h"

#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	      K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210,       \
	                              K305, K306, K307,                         \
	                              K405, K406, K407  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111 }, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K305,  K306,  K307,  KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K405,  K406, K407,  KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#define LAYOUT_BigBars( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	      K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210,       \
	                              KC_NO, K306, K307,                         \
	                              K405,K406, K407  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110, K111}, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K305,  K306,  K307,  KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K405,  KC_406, K407,  KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#define LAYOUT_OrthoSplit( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	      K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, KC_NO, \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210,       \
	                              K305, K306, K307,                         \
	                              K405, K407  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110}, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K305,  K306,  K307,  KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K405,  KC_NO, K407,  KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#define LAYOUT_OrthoBigBars( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	      K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, KC_NO, \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210,       \
	                              KC305, K306, KC307,                         \
	                              KC405KC406, KC407  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111 }, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K305,  K306,  K307,  KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K405,  KC_406, K407,  KC_NO, KC_NO, KC_NO, KC_NO }  \
}
#endif
#ifndef HERMES_H
#define HERMES_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, K44,\
	K10, K11, K12, K13, K45,\
	K20, K21, K22, K23, K46,\
	K30, K31, K32, K33, K47,\
	K40, K41, K42, K43, K48 \
) { \
	{ K00,   K01,   K02,   K03 , K44}, \
	{ K10,   K11,   K12,   K13 , K45}, \
	{ K20,   K21,   K22,   K23 , K46}, \
	{ K30,   K31,   K32,   K33 , K47}, \
	{ K40,   K41,   K42,   K43 , K48}  \
}

#endif
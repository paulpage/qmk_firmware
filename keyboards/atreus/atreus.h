#ifndef ATREUS_H
#define ATREUS_H

#include "quantum.h"
#include "matrix.h"
#include "backlight.h"
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
        k00, k01, k02, k03, k04, k05, k06,   k07, k08, k09, k10, k11, k12, k13, \
        k14, k15, k16, k17, k18, k19, k20,   k21, k22, k23, k24, k25, k26, k27, \
        k28, k29, k30, k31, k32, k33, k34,   k35, k36, k37, k38, k39, k40, k41, \
        k42, k43, k44, k45, k46, k47, k48,   k49, k50, k51, k52, k53, k54, k55, \
        k56, k57, k58, k59, k60, k61, k62,   k63, k64, k65, k66, k67, k68, k69 \
) \
{ \
	{ k07,  k21,   k35,  k49,  k00, k14,  k28, k42, k56, k63 }, \
	{ k08,  k22,   k36,  k50,  k01, k15,  k29, k43, k57, k64 }, \
	{ k09,  k23,   k37,  k51,  k02, k16,  k30, k44, k58, k65 }, \
	{ k10,  k24,   k38,  k52,  k03, k17,  k31, k45, k59, k66 }, \
	{ k11,  k25,   k39,  k53,  k04, k18,  k32, k46, k60, k67 }, \
	{ k12,  k26,   k40,  k54,  k05, k19,  k33, k47, k61, k68 }, \
	{ k13,  k27,   k41,  k55,  k06, k20,  k34, k48, k62, k69 } \
}

#endif

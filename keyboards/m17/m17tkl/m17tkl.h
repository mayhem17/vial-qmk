#pragma once

#define ___ KC_NO

#include "quantum.h"

#define LAYOUT_laioute( \
    k00, k01, k02,      k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e,     k0f, k0g, k0h, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e,     k1f, k1g, k1h, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,      k2e,     k2f, k2g, k2h, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,      k3d, k3e, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b,      k4d, k4e,          k4g, \
	k50, k51,      k53,                k57,           k5a, k5b,      k5d, k5e,     k5f, k5g, k5h \
  ) { \
    { k00, k01, k02, ___, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g, k0h }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, k1g, k1h }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, ___, k2e, k2f, k2g, k2h }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, ___, k3d, k3e, ___, ___, ___ }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, ___, k4d, k4e, ___, k4g, ___ }, \
    { k50, k51, ___, k53, ___, ___, ___, k57, ___, ___, k5a, k5b, ___, k5d, k5e, k5f, k5g, k5h }, \
}

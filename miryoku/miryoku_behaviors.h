// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_MT_L(MOD, TAP) &u_mt_l MOD TAP
#define U_MT_R(MOD, TAP) &u_mt_l MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP

/* Don't use this one */
#define U_MT(MOD, TAP) &u_mt_l MOD TAP

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// RGB Matrix优化设置
#define RGB_MATRIX_LED_PROCESS_LIMIT (61 + 4) / 5  // 优化LED处理性能
#define RGB_MATRIX_LED_FLUSH_LIMIT 16               // 限制刷新频率为60fps

// 步进值设置
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 16
#define RGB_MATRIX_VAL_STEP 16
#define RGB_MATRIX_SPD_STEP 16
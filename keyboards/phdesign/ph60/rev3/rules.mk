# MCU name
MCU = RP2040
BOOTLOADER = rp2040

# Build Options (移除与JSON重复的配置)
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration

# RGB Matrix
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812

# WS2812 Driver
WS2812_DRIVER = vendor
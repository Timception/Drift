# MCU Name
MCU	= RP2040

# Bootloader Selection
BOOTLOADER = rp2040

# PIO Serial/WS2812 drivers used on RP2040
SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor

# OLED Settings
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
WPM_ENABLE	= yes
OPT_DEFS += -DHAL_USE_I2C=TRUE

# Allow Warnings
#ALLOW_WARNINGS = yes

# LTO must be disabled for RP2040 builds
LTO_ENABLE = no

# Split Keyboard Settings
SPLIT_KEYBOARD = yes
#SWAP_HANDS_ENABLE = yes

#SPACE SAVING
AUDIO_ENABLE			= no
MUSIC_ENABLE			= no
CONSOLE_ENABLE			= no
COMMAND_ENABLE			= no
MOUSEKEY_ENABLE			= no
SPACE_CADET_ENABLE		= no
#MAGIC_ENABLE			= no
BLUETOOTH_ENABLE		= no		# Enable Bluetooth
RGBLIGHT_ENABLE			= no		# Enable keyboard RGB underglow
BACKLIGHT_ENABLE		= no		# Enable keyboard backlight functionality

# Build Options
BOOTMAGIC_ENABLE		= yes		# Virtual DIP switch configuration
EXTRAKEY_ENABLE			= yes		# Audio control and System control
GRAVE_ESC_ENABLE		= yes
#RGBLIGHT_SUPPORTED		= yes
#RGB_MATRIX_SUPPORTED	= yes
#RGB_MATRIX_ENABLE		= yes
#RGB_MATRIX_DRIVER		= WS2812


# Do not enable SLEEP_LED_ENABLE because it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE		= no
# If this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE				= yes
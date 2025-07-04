# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

AUDIO_SUPPORTED = no        # Audio is not supported.
RGB_MATRIX_SUPPORTED = no   # RGB matrix is supported and enabled by default.
RGBLIGHT_SUPPORTED = no     # RGB underglow is supported, but not enabled by default.
RGB_MATRIX_ENABLE = no      # Enable keyboard RGB matrix functionality
RGB_MATRIX_DRIVER = WS2812

# Charybdis is a split 4x6 keyboard with a maximum of 5 thumb keys (3 on the
# trackball side).
SPLIT_KEYBOARD = yes

POINTING_DEVICE_ENABLE = yes # Enable trackball
POINTING_DEVICE_DRIVER = pmw3360
# https://qmk.fm/changes/2018-11-16-use-a-single-endpoint-for-hid-reports
MOUSE_SHARED_EP = no # Unify multiple HID interfaces into a single Endpoint

# Enable link-time optimization by default.  The Charybdis packs a lot of
# features (RGB, Via, trackball) in a small atmega32u4 package.
LTO_ENABLE = yes

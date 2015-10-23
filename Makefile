TARGET := iphone:clang:7.1:latest
ARCHS = armv7 arm64
CFLAGS = -fobjc-arc -O2
LDFLAGS = -lz

export THEOS=/opt/theos

include theos/makefiles/common.mk

TOOL_NAME = GrooveCoaster
GrooveCoaster_FILES = main.mm

include $(THEOS_MAKE_PATH)/tool.mk

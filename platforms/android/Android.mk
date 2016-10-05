LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := mrlogger
LOCAL_SRC_FILES := ../../lib/printer/console_printer.cpp ../../lib/printer/file_printer.cpp ../../lib/printer/silent_printer.cpp
LOCAL_C_INCLUDES := ../../include

#include $(BUILD_SHARED_LIBRARY)
include $(BUILD_STATIC_LIBRARY)

APP_STL := gnustl_static
APP_CPPFLAGS := -frtti -fexceptions -fopenmp -DANDROID
#APP_ABI := armeabi-v7a
#APP_ABI := all
APP_ABI := armeabi armeabi-v7a x86 mips
APP_PLATFORM := android-24
APP_CPPFLAGS += -std=c++11      #  Enable C++11. However, pthread, rtti and exceptions aren't enabled
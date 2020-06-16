#pragma once

#ifdef RE_PLATFORM_WINDOWS
	#ifdef RE_BUILD_DLL
		#define RUSTIC_API __declspec(dllexport)
	#else
		#define RUSTIC_API __declspec(dllimport)
	#endif
#else
	#error Rustic is only compatible with Windows x64

#endif
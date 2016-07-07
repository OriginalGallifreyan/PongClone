#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// Referee
struct Referee_t2749722880;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t2278695849  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text LevelManager::waitText
	Text_t3286458198 * ___waitText_2;
	// System.Boolean LevelManager::isPlaying
	bool ___isPlaying_3;
	// Referee LevelManager::referee
	Referee_t2749722880 * ___referee_4;

public:
	inline static int32_t get_offset_of_waitText_2() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___waitText_2)); }
	inline Text_t3286458198 * get_waitText_2() const { return ___waitText_2; }
	inline Text_t3286458198 ** get_address_of_waitText_2() { return &___waitText_2; }
	inline void set_waitText_2(Text_t3286458198 * value)
	{
		___waitText_2 = value;
		Il2CppCodeGenWriteBarrier(&___waitText_2, value);
	}

	inline static int32_t get_offset_of_isPlaying_3() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___isPlaying_3)); }
	inline bool get_isPlaying_3() const { return ___isPlaying_3; }
	inline bool* get_address_of_isPlaying_3() { return &___isPlaying_3; }
	inline void set_isPlaying_3(bool value)
	{
		___isPlaying_3 = value;
	}

	inline static int32_t get_offset_of_referee_4() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___referee_4)); }
	inline Referee_t2749722880 * get_referee_4() const { return ___referee_4; }
	inline Referee_t2749722880 ** get_address_of_referee_4() { return &___referee_4; }
	inline void set_referee_4(Referee_t2749722880 * value)
	{
		___referee_4 = value;
		Il2CppCodeGenWriteBarrier(&___referee_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

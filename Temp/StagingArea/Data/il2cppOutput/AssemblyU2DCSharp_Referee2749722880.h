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
// Ball
struct Ball_t2062879;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Referee
struct  Referee_t2749722880  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Referee::playerScore
	int32_t ___playerScore_2;
	// System.Int32 Referee::enemyScore
	int32_t ___enemyScore_3;
	// System.Int32 Referee::maxScore
	int32_t ___maxScore_4;
	// UnityEngine.UI.Text Referee::playerScoreboard
	Text_t3286458198 * ___playerScoreboard_5;
	// UnityEngine.UI.Text Referee::enemyScoreboard
	Text_t3286458198 * ___enemyScoreboard_6;
	// Ball Referee::ball
	Ball_t2062879 * ___ball_7;
	// System.Boolean Referee::isPlaying
	bool ___isPlaying_8;

public:
	inline static int32_t get_offset_of_playerScore_2() { return static_cast<int32_t>(offsetof(Referee_t2749722880, ___playerScore_2)); }
	inline int32_t get_playerScore_2() const { return ___playerScore_2; }
	inline int32_t* get_address_of_playerScore_2() { return &___playerScore_2; }
	inline void set_playerScore_2(int32_t value)
	{
		___playerScore_2 = value;
	}

	inline static int32_t get_offset_of_enemyScore_3() { return static_cast<int32_t>(offsetof(Referee_t2749722880, ___enemyScore_3)); }
	inline int32_t get_enemyScore_3() const { return ___enemyScore_3; }
	inline int32_t* get_address_of_enemyScore_3() { return &___enemyScore_3; }
	inline void set_enemyScore_3(int32_t value)
	{
		___enemyScore_3 = value;
	}

	inline static int32_t get_offset_of_maxScore_4() { return static_cast<int32_t>(offsetof(Referee_t2749722880, ___maxScore_4)); }
	inline int32_t get_maxScore_4() const { return ___maxScore_4; }
	inline int32_t* get_address_of_maxScore_4() { return &___maxScore_4; }
	inline void set_maxScore_4(int32_t value)
	{
		___maxScore_4 = value;
	}

	inline static int32_t get_offset_of_playerScoreboard_5() { return static_cast<int32_t>(offsetof(Referee_t2749722880, ___playerScoreboard_5)); }
	inline Text_t3286458198 * get_playerScoreboard_5() const { return ___playerScoreboard_5; }
	inline Text_t3286458198 ** get_address_of_playerScoreboard_5() { return &___playerScoreboard_5; }
	inline void set_playerScoreboard_5(Text_t3286458198 * value)
	{
		___playerScoreboard_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerScoreboard_5, value);
	}

	inline static int32_t get_offset_of_enemyScoreboard_6() { return static_cast<int32_t>(offsetof(Referee_t2749722880, ___enemyScoreboard_6)); }
	inline Text_t3286458198 * get_enemyScoreboard_6() const { return ___enemyScoreboard_6; }
	inline Text_t3286458198 ** get_address_of_enemyScoreboard_6() { return &___enemyScoreboard_6; }
	inline void set_enemyScoreboard_6(Text_t3286458198 * value)
	{
		___enemyScoreboard_6 = value;
		Il2CppCodeGenWriteBarrier(&___enemyScoreboard_6, value);
	}

	inline static int32_t get_offset_of_ball_7() { return static_cast<int32_t>(offsetof(Referee_t2749722880, ___ball_7)); }
	inline Ball_t2062879 * get_ball_7() const { return ___ball_7; }
	inline Ball_t2062879 ** get_address_of_ball_7() { return &___ball_7; }
	inline void set_ball_7(Ball_t2062879 * value)
	{
		___ball_7 = value;
		Il2CppCodeGenWriteBarrier(&___ball_7, value);
	}

	inline static int32_t get_offset_of_isPlaying_8() { return static_cast<int32_t>(offsetof(Referee_t2749722880, ___isPlaying_8)); }
	inline bool get_isPlaying_8() const { return ___isPlaying_8; }
	inline bool* get_address_of_isPlaying_8() { return &___isPlaying_8; }
	inline void set_isPlaying_8(bool value)
	{
		___isPlaying_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

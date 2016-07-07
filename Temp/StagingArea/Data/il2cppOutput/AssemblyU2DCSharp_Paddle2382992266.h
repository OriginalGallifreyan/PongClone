#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ball
struct Ball_t2062879;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paddle
struct  Paddle_t2382992266  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Paddle::movementSpeed
	float ___movementSpeed_2;
	// System.Boolean Paddle::isPlayer
	bool ___isPlayer_3;
	// System.Single Paddle::speedMultiplier
	float ___speedMultiplier_4;
	// System.Single Paddle::screenHeightInWorldUnits
	float ___screenHeightInWorldUnits_5;
	// System.Single Paddle::paddleHalfWidth
	float ___paddleHalfWidth_6;
	// Ball Paddle::ball
	Ball_t2062879 * ___ball_7;

public:
	inline static int32_t get_offset_of_movementSpeed_2() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___movementSpeed_2)); }
	inline float get_movementSpeed_2() const { return ___movementSpeed_2; }
	inline float* get_address_of_movementSpeed_2() { return &___movementSpeed_2; }
	inline void set_movementSpeed_2(float value)
	{
		___movementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_isPlayer_3() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___isPlayer_3)); }
	inline bool get_isPlayer_3() const { return ___isPlayer_3; }
	inline bool* get_address_of_isPlayer_3() { return &___isPlayer_3; }
	inline void set_isPlayer_3(bool value)
	{
		___isPlayer_3 = value;
	}

	inline static int32_t get_offset_of_speedMultiplier_4() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___speedMultiplier_4)); }
	inline float get_speedMultiplier_4() const { return ___speedMultiplier_4; }
	inline float* get_address_of_speedMultiplier_4() { return &___speedMultiplier_4; }
	inline void set_speedMultiplier_4(float value)
	{
		___speedMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_screenHeightInWorldUnits_5() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___screenHeightInWorldUnits_5)); }
	inline float get_screenHeightInWorldUnits_5() const { return ___screenHeightInWorldUnits_5; }
	inline float* get_address_of_screenHeightInWorldUnits_5() { return &___screenHeightInWorldUnits_5; }
	inline void set_screenHeightInWorldUnits_5(float value)
	{
		___screenHeightInWorldUnits_5 = value;
	}

	inline static int32_t get_offset_of_paddleHalfWidth_6() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___paddleHalfWidth_6)); }
	inline float get_paddleHalfWidth_6() const { return ___paddleHalfWidth_6; }
	inline float* get_address_of_paddleHalfWidth_6() { return &___paddleHalfWidth_6; }
	inline void set_paddleHalfWidth_6(float value)
	{
		___paddleHalfWidth_6 = value;
	}

	inline static int32_t get_offset_of_ball_7() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___ball_7)); }
	inline Ball_t2062879 * get_ball_7() const { return ___ball_7; }
	inline Ball_t2062879 ** get_address_of_ball_7() { return &___ball_7; }
	inline void set_ball_7(Ball_t2062879 * value)
	{
		___ball_7 = value;
		Il2CppCodeGenWriteBarrier(&___ball_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

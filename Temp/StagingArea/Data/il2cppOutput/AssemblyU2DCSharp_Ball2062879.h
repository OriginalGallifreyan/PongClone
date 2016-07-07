#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t2062879  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Ball::speed
	float ___speed_2;
	// System.String Ball::lastHitBy
	String_t* ___lastHitBy_3;
	// System.Boolean Ball::isScored
	bool ___isScored_4;
	// UnityEngine.Vector2 Ball::velocity
	Vector2_t3525329788  ___velocity_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_lastHitBy_3() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___lastHitBy_3)); }
	inline String_t* get_lastHitBy_3() const { return ___lastHitBy_3; }
	inline String_t** get_address_of_lastHitBy_3() { return &___lastHitBy_3; }
	inline void set_lastHitBy_3(String_t* value)
	{
		___lastHitBy_3 = value;
		Il2CppCodeGenWriteBarrier(&___lastHitBy_3, value);
	}

	inline static int32_t get_offset_of_isScored_4() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___isScored_4)); }
	inline bool get_isScored_4() const { return ___isScored_4; }
	inline bool* get_address_of_isScored_4() { return &___isScored_4; }
	inline void set_isScored_4(bool value)
	{
		___isScored_4 = value;
	}

	inline static int32_t get_offset_of_velocity_5() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___velocity_5)); }
	inline Vector2_t3525329788  get_velocity_5() const { return ___velocity_5; }
	inline Vector2_t3525329788 * get_address_of_velocity_5() { return &___velocity_5; }
	inline void set_velocity_5(Vector2_t3525329788  value)
	{
		___velocity_5 = value;
	}
};

struct Ball_t2062879_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Ball::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_6() { return static_cast<int32_t>(offsetof(Ball_t2062879_StaticFields, ___U3CU3Ef__switchU24map0_6)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_6() const { return ___U3CU3Ef__switchU24map0_6; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_6() { return &___U3CU3Ef__switchU24map0_6; }
	inline void set_U3CU3Ef__switchU24map0_6(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

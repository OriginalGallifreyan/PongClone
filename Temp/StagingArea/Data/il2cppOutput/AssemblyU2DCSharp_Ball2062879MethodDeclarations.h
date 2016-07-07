#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Ball
struct Ball_t2062879;
// UnityEngine.Collision2D
struct Collision2D_t452810033;
// UnityEngine.Collider2D
struct Collider2D_t1890038195;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2D452810033.h"
#include "UnityEngine_UnityEngine_Collider2D1890038195.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1158546268 (Ball_t2062879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::Start()
extern "C"  void Ball_Start_m105684060 (Ball_t2062879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Ball_OnCollisionEnter2D_m3757502918 (Ball_t2062879 * __this, Collision2D_t452810033 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Ball_OnTriggerEnter2D_m3916298140 (Ball_t2062879 * __this, Collider2D_t1890038195 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Ball::CalculateVelocityFromPaddle(UnityEngine.Collision2D)
extern "C"  Vector2_t3525329788  Ball_CalculateVelocityFromPaddle_m3820420783 (Ball_t2062879 * __this, Collision2D_t452810033 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::Launch()
extern "C"  void Ball_Launch_m552211355 (Ball_t2062879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::Reset()
extern "C"  void Ball_Reset_m3099946505 (Ball_t2062879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

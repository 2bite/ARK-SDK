#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_FunctionObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Set Character Material Param
struct UEndBoss_FunctionObject_C_Set_Character_Material_Param_Params
{
	class AActor*                                      TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.GetEndBossColor
struct UEndBoss_FunctionObject_C_GetEndBossColor_Params
{
	class AActor*                                      WorldContextActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Get EndBoss Difficulty
struct UEndBoss_FunctionObject_C_Get_EndBoss_Difficulty_Params
{
	class AActor*                                      WorldContextActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBossDifficulty_Enum>                  difficulty;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Decrement Character Material Param
struct UEndBoss_FunctionObject_C_Decrement_Character_Material_Param_Params
{
	class AActor*                                      ActorTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DissolveParam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDeltaTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastMaterialValue;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.ExecuteUbergraph_EndBoss_FunctionObject
struct UEndBoss_FunctionObject_C_ExecuteUbergraph_EndBoss_FunctionObject_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

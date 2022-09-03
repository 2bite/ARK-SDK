#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTD_CanReachTarget_Fjordhawk_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.IsFacing
struct UBTD_CanReachTarget_Fjordhawk_C_IsFacing_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Facing;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ReceiveConditionCheck
struct UBTD_CanReachTarget_Fjordhawk_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk
struct UBTD_CanReachTarget_Fjordhawk_C_ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

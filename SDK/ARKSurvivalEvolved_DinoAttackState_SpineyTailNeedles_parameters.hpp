#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_SpineyTailNeedles_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.GetGravityBias
struct UDinoAttackState_SpineyTailNeedles_C_GetGravityBias_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z_Bias;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.Get Socket Location
struct UDinoAttackState_SpineyTailNeedles_C_Get_Socket_Location_Params
{
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.OffsetVectorRandomly
struct UDinoAttackState_SpineyTailNeedles_C_OffsetVectorRandomly_Params
{
	struct FVector                                     VectorIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     newVector;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.ExecuteUbergraph_DinoAttackState_SpineyTailNeedles
struct UDinoAttackState_SpineyTailNeedles_C_ExecuteUbergraph_DinoAttackState_SpineyTailNeedles_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

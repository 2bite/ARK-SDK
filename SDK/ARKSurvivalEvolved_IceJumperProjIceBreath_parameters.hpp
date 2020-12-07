#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumperProjIceBreath_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Is Vector on RightOf Forward
struct AIceJumperProjIceBreath_C_Is_Vector_on_RightOf_Forward_Params
{
	struct FVector                                     TestVector;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.GetIceBreathInterpSpeed
struct AIceJumperProjIceBreath_C_GetIceBreathInterpSpeed_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Get Normalized Vector On Ice Jumper Plane from Location
struct AIceJumperProjIceBreath_C_Get_Normalized_Vector_On_Ice_Jumper_Plane_from_Location_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Get Best Impact Location
struct AIceJumperProjIceBreath_C_Get_Best_Impact_Location_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundNewimpactLocation;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.CanCollideWith
struct AIceJumperProjIceBreath_C_CanCollideWith_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ValidateTick
struct AIceJumperProjIceBreath_C_ValidateTick_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.UpdateBeamLength
struct AIceJumperProjIceBreath_C_UpdateBeamLength_Params
{
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.GetBeamStartEnd
struct AIceJumperProjIceBreath_C_GetBeamStartEnd_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ValidatedStart;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ValidatedEnd;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.UserConstructionScript
struct AIceJumperProjIceBreath_C_UserConstructionScript_Params
{
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ReceiveBeginPlay
struct AIceJumperProjIceBreath_C_ReceiveBeginPlay_Params
{
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ReceiveTick
struct AIceJumperProjIceBreath_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.EnableBeam
struct AIceJumperProjIceBreath_C_EnableBeam_Params
{
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.OWNER_DrawDebugLine
struct AIceJumperProjIceBreath_C_OWNER_DrawDebugLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.OWNER_DrawDebugSphere
struct AIceJumperProjIceBreath_C_OWNER_DrawDebugSphere_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ExecuteUbergraph_IceJumperProjIceBreath
struct AIceJumperProjIceBreath_C_ExecuteUbergraph_IceJumperProjIceBreath_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

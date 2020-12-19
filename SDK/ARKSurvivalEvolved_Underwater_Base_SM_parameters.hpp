#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Underwater_Base_SM_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Underwater_Base_SM.Underwater_Base_SM_C.BPPreventPlacingStructureOntoMe
struct AUnderwater_Base_SM_C_BPPreventPlacingStructureOntoMe_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure**                           ForNewStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  ForHitResult;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Underwater_Base_SM.Underwater_Base_SM_C.BPForceConsideredEnemyFoundation
struct AUnderwater_Base_SM_C_BPForceConsideredEnemyFoundation_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure**                           ForNewStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TestAtLocation;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Underwater_Base_SM.Underwater_Base_SM_C.ChangedCompartmentFloodState
struct AUnderwater_Base_SM_C_ChangedCompartmentFloodState_Params
{
};

// Function Underwater_Base_SM.Underwater_Base_SM_C.UserConstructionScript
struct AUnderwater_Base_SM_C_UserConstructionScript_Params
{
};

// Function Underwater_Base_SM.Underwater_Base_SM_C.ExecuteUbergraph_Underwater_Base_SM
struct AUnderwater_Base_SM_C_ExecuteUbergraph_Underwater_Base_SM_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

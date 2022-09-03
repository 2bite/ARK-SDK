#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FoliageTrap_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.GetTrapCooldownAtLocation
struct ABuff_FoliageTrap_C_GetTrapCooldownAtLocation_Params
{
	struct FVector                                     AtLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             CooldownAtLocation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LocationIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.CullCooldowns
struct ABuff_FoliageTrap_C_CullCooldowns_Params
{
};

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.ReceiveBeginPlay
struct ABuff_FoliageTrap_C_ReceiveBeginPlay_Params
{
};

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.CheckFoliageForTrap
struct ABuff_FoliageTrap_C_CheckFoliageForTrap_Params
{
	class UClass*                                      HarvestComponentClass;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLoc;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TheInstigatorLoc;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.BuffTickServer
struct ABuff_FoliageTrap_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.UserConstructionScript
struct ABuff_FoliageTrap_C_UserConstructionScript_Params
{
};

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.MultiPlayPoisonMushroomSound
struct ABuff_FoliageTrap_C_MultiPlayPoisonMushroomSound_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FoliageTrap.Buff_FoliageTrap_C.ExecuteUbergraph_Buff_FoliageTrap
struct ABuff_FoliageTrap_C_ExecuteUbergraph_Buff_FoliageTrap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

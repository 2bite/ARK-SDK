#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TransGPSCharge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TransGPSCharge.TransGPSCharge_C.BPPostLoadedFromSaveGame
struct ATransGPSCharge_C_BPPostLoadedFromSaveGame_Params
{
};

// Function TransGPSCharge.TransGPSCharge_C.BPPlacedStructure
struct ATransGPSCharge_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TransGPSCharge.TransGPSCharge_C.UserConstructionScript
struct ATransGPSCharge_C_UserConstructionScript_Params
{
};

// Function TransGPSCharge.TransGPSCharge_C.ExecuteUbergraph_TransGPSCharge
struct ATransGPSCharge_C_ExecuteUbergraph_TransGPSCharge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

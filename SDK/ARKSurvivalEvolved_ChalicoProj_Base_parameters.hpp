#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoProj_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChalicoProj_Base.ChalicoProj_Base_C.ReceiveBeginPlay
struct AChalicoProj_Base_C_ReceiveBeginPlay_Params
{
};

// Function ChalicoProj_Base.ChalicoProj_Base_C.OnExplode
struct AChalicoProj_Base_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ChalicoProj_Base.ChalicoProj_Base_C.UserConstructionScript
struct AChalicoProj_Base_C_UserConstructionScript_Params
{
};

// Function ChalicoProj_Base.ChalicoProj_Base_C.ExecuteUbergraph_ChalicoProj_Base
struct AChalicoProj_Base_C_ExecuteUbergraph_ChalicoProj_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BogSpiderBioGrappleEscape_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPCustomAllowAddBuff
struct ABuff_BogSpiderBioGrappleEscape_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPGetHUDElements
struct ABuff_BogSpiderBioGrappleEscape_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.UserConstructionScript
struct ABuff_BogSpiderBioGrappleEscape_C_UserConstructionScript_Params
{
};

// Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape
struct ABuff_BogSpiderBioGrappleEscape_C_ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

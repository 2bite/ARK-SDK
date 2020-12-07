#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_GetNearestZiplineAttachPointForTarget_TK_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation
struct UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_FindAttachLocation_Params
{
	struct FVector                                     GroundLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute
struct UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK
struct UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

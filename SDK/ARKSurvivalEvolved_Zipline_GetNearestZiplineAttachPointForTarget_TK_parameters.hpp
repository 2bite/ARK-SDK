#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_GetNearestZiplineAttachPointForTarget_TK_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation
struct UZipline_GetNearestZiplineAttachPointForTarget_TK_C_FindAttachLocation_Params
{
	struct FVector                                     GroundLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute
struct UZipline_GetNearestZiplineAttachPointForTarget_TK_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK
struct UZipline_GetNearestZiplineAttachPointForTarget_TK_C_ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_GetOffZipline_TK_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveAbort
struct UCaveWolf_GetOffZipline_TK_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveTick
struct UCaveWolf_GetOffZipline_TK_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveExecute
struct UCaveWolf_GetOffZipline_TK_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ExecuteUbergraph_CaveWolf_GetOffZipline_TK
struct UCaveWolf_GetOffZipline_TK_C_ExecuteUbergraph_CaveWolf_GetOffZipline_TK_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

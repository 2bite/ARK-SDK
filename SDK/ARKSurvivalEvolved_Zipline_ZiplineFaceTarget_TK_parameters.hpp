#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_ZiplineFaceTarget_TK_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Zipline_ZiplineFaceTarget_TK.Zipline_ZiplineFaceTarget_TK_C.ReceiveTick
struct UZipline_ZiplineFaceTarget_TK_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_ZiplineFaceTarget_TK.Zipline_ZiplineFaceTarget_TK_C.ReceiveExecute
struct UZipline_ZiplineFaceTarget_TK_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Zipline_ZiplineFaceTarget_TK.Zipline_ZiplineFaceTarget_TK_C.ExecuteUbergraph_Zipline_ZiplineFaceTarget_TK
struct UZipline_ZiplineFaceTarget_TK_C_ExecuteUbergraph_Zipline_ZiplineFaceTarget_TK_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

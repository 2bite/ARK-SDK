#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TitanDownloadSickness_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.BPActivated
struct ABuff_TitanDownloadSickness_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.BPDeactivated
struct ABuff_TitanDownloadSickness_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.UserConstructionScript
struct ABuff_TitanDownloadSickness_C_UserConstructionScript_Params
{
};

// Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.ExecuteUbergraph_Buff_TitanDownloadSickness
struct ABuff_TitanDownloadSickness_C_ExecuteUbergraph_Buff_TitanDownloadSickness_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

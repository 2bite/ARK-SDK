#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Foundation_Tri_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_Foundation_Tri.Base_Foundation_Tri_C.IsValidSnapPointTo
struct ABase_Foundation_Tri_C_IsValidSnapPointTo_Params
{
	class APrimalStructure**                           childStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MySnapPointToIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Base_Foundation_Tri.Base_Foundation_Tri_C.UserConstructionScript
struct ABase_Foundation_Tri_C_UserConstructionScript_Params
{
};

// Function Base_Foundation_Tri.Base_Foundation_Tri_C.ExecuteUbergraph_Base_Foundation_Tri
struct ABase_Foundation_Tri_C_ExecuteUbergraph_Base_Foundation_Tri_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

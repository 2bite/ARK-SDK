#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapLasso_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapLasso.WeapLasso_C.ReceiveTick
struct AWeapLasso_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapLasso.WeapLasso_C.BPCanEquip
struct AWeapLasso_C_BPCanEquip_Params
{
	class AShooterCharacter**                          ByCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapLasso.WeapLasso_C.BPRemainEquipped
struct AWeapLasso_C_BPRemainEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapLasso.WeapLasso_C.UserConstructionScript
struct AWeapLasso_C_UserConstructionScript_Params
{
};

// Function WeapLasso.WeapLasso_C.ExecuteUbergraph_WeapLasso
struct AWeapLasso_C_ExecuteUbergraph_WeapLasso_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

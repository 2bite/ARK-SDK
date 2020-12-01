// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Flame_Crossbow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Flame_Crossbow.ProjArrow_Flame_Crossbow_C.UserConstructionScript
// ()

void AProjArrow_Flame_Crossbow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Flame_Crossbow.ProjArrow_Flame_Crossbow_C.UserConstructionScript");

	AProjArrow_Flame_Crossbow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Flame_Crossbow.ProjArrow_Flame_Crossbow_C.ExecuteUbergraph_ProjArrow_Flame_Crossbow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Flame_Crossbow_C::ExecuteUbergraph_ProjArrow_Flame_Crossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Flame_Crossbow.ProjArrow_Flame_Crossbow_C.ExecuteUbergraph_ProjArrow_Flame_Crossbow");

	AProjArrow_Flame_Crossbow_C_ExecuteUbergraph_ProjArrow_Flame_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Impacts_Big_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C.UserConstructionScript
// ()

void AProjArrow_Impacts_Big_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C.UserConstructionScript");

	AProjArrow_Impacts_Big_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C.ExecuteUbergraph_ProjArrow_Impacts_Big
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Impacts_Big_C::ExecuteUbergraph_ProjArrow_Impacts_Big(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C.ExecuteUbergraph_ProjArrow_Impacts_Big");

	AProjArrow_Impacts_Big_C_ExecuteUbergraph_ProjArrow_Impacts_Big_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

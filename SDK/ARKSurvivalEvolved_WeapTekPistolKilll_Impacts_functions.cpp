// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekPistolKilll_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekPistolKilll_Impacts.WeapTekPistolKilll_Impacts_C.UserConstructionScript
// ()

void AWeapTekPistolKilll_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistolKilll_Impacts.WeapTekPistolKilll_Impacts_C.UserConstructionScript");

	AWeapTekPistolKilll_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistolKilll_Impacts.WeapTekPistolKilll_Impacts_C.ExecuteUbergraph_WeapTekPistolKilll_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistolKilll_Impacts_C::ExecuteUbergraph_WeapTekPistolKilll_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistolKilll_Impacts.WeapTekPistolKilll_Impacts_C.ExecuteUbergraph_WeapTekPistolKilll_Impacts");

	AWeapTekPistolKilll_Impacts_C_ExecuteUbergraph_WeapTekPistolKilll_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

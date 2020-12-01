// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_Aberration_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSword_Aberration.WeapSword_Aberration_C.UserConstructionScript
// ()

void AWeapSword_Aberration_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Aberration.WeapSword_Aberration_C.UserConstructionScript");

	AWeapSword_Aberration_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Aberration.WeapSword_Aberration_C.ExecuteUbergraph_WeapSword_Aberration
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSword_Aberration_C::ExecuteUbergraph_WeapSword_Aberration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Aberration.WeapSword_Aberration_C.ExecuteUbergraph_WeapSword_Aberration");

	AWeapSword_Aberration_C_ExecuteUbergraph_WeapSword_Aberration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

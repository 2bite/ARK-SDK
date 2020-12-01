// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekSniper_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekSniper_Impacts.WeapTekSniper_Impacts_C.UserConstructionScript
// ()

void AWeapTekSniper_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper_Impacts.WeapTekSniper_Impacts_C.UserConstructionScript");

	AWeapTekSniper_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper_Impacts.WeapTekSniper_Impacts_C.ExecuteUbergraph_WeapTekSniper_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_Impacts_C::ExecuteUbergraph_WeapTekSniper_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper_Impacts.WeapTekSniper_Impacts_C.ExecuteUbergraph_WeapTekSniper_Impacts");

	AWeapTekSniper_Impacts_C_ExecuteUbergraph_WeapTekSniper_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

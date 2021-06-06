// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekSniper_ExitImpacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekSniper_ExitImpacts.WeapTekSniper_ExitImpacts_C.UserConstructionScript
// ()

void AWeapTekSniper_ExitImpacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper_ExitImpacts.WeapTekSniper_ExitImpacts_C.UserConstructionScript");

	AWeapTekSniper_ExitImpacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper_ExitImpacts.WeapTekSniper_ExitImpacts_C.ExecuteUbergraph_WeapTekSniper_ExitImpacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_ExitImpacts_C::ExecuteUbergraph_WeapTekSniper_ExitImpacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper_ExitImpacts.WeapTekSniper_ExitImpacts_C.ExecuteUbergraph_WeapTekSniper_ExitImpacts");

	AWeapTekSniper_ExitImpacts_C_ExecuteUbergraph_WeapTekSniper_ExitImpacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRodSap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFishingRodSap.WeapFishingRodSap_C.UserConstructionScript
// ()

void AWeapFishingRodSap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRodSap.WeapFishingRodSap_C.UserConstructionScript");

	AWeapFishingRodSap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRodSap.WeapFishingRodSap_C.ExecuteUbergraph_WeapFishingRodSap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRodSap_C::ExecuteUbergraph_WeapFishingRodSap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRodSap.WeapFishingRodSap_C.ExecuteUbergraph_WeapFishingRodSap");

	AWeapFishingRodSap_C_ExecuteUbergraph_WeapFishingRodSap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

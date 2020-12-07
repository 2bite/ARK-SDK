// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRodLeech_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFishingRodLeech.WeapFishingRodLeech_C.UserConstructionScript
// ()

void AWeapFishingRodLeech_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRodLeech.WeapFishingRodLeech_C.UserConstructionScript");

	AWeapFishingRodLeech_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRodLeech.WeapFishingRodLeech_C.ExecuteUbergraph_WeapFishingRodLeech
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRodLeech_C::ExecuteUbergraph_WeapFishingRodLeech(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRodLeech.WeapFishingRodLeech_C.ExecuteUbergraph_WeapFishingRodLeech");

	AWeapFishingRodLeech_C_ExecuteUbergraph_WeapFishingRodLeech_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

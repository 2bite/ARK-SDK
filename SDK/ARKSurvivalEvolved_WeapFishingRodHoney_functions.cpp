// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRodHoney_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFishingRodHoney.WeapFishingRodHoney_C.UserConstructionScript
// ()

void AWeapFishingRodHoney_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRodHoney.WeapFishingRodHoney_C.UserConstructionScript");

	AWeapFishingRodHoney_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRodHoney.WeapFishingRodHoney_C.ExecuteUbergraph_WeapFishingRodHoney
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRodHoney_C::ExecuteUbergraph_WeapFishingRodHoney(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRodHoney.WeapFishingRodHoney_C.ExecuteUbergraph_WeapFishingRodHoney");

	AWeapFishingRodHoney_C_ExecuteUbergraph_WeapFishingRodHoney_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

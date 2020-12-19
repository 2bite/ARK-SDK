// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifle_Silencer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRifle_Silencer.WeapRifle_Silencer_C.UserConstructionScript
// ()

void AWeapRifle_Silencer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_Silencer.WeapRifle_Silencer_C.UserConstructionScript");

	AWeapRifle_Silencer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRifle_Silencer.WeapRifle_Silencer_C.ExecuteUbergraph_WeapRifle_Silencer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRifle_Silencer_C::ExecuteUbergraph_WeapRifle_Silencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_Silencer.WeapRifle_Silencer_C.ExecuteUbergraph_WeapRifle_Silencer");

	AWeapRifle_Silencer_C_ExecuteUbergraph_WeapRifle_Silencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

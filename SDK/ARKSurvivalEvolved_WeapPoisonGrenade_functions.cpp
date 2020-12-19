// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPoisonGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPoisonGrenade.WeapPoisonGrenade_C.UserConstructionScript
// ()

void AWeapPoisonGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPoisonGrenade.WeapPoisonGrenade_C.UserConstructionScript");

	AWeapPoisonGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPoisonGrenade.WeapPoisonGrenade_C.ExecuteUbergraph_WeapPoisonGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPoisonGrenade_C::ExecuteUbergraph_WeapPoisonGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPoisonGrenade.WeapPoisonGrenade_C.ExecuteUbergraph_WeapPoisonGrenade");

	AWeapPoisonGrenade_C_ExecuteUbergraph_WeapPoisonGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

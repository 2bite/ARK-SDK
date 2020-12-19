// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGrenade.WeapGrenade_C.UserConstructionScript
// ()

void AWeapGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGrenade.WeapGrenade_C.UserConstructionScript");

	AWeapGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGrenade.WeapGrenade_C.ExecuteUbergraph_WeapGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGrenade_C::ExecuteUbergraph_WeapGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGrenade.WeapGrenade_C.ExecuteUbergraph_WeapGrenade");

	AWeapGrenade_C_ExecuteUbergraph_WeapGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

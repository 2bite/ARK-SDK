// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGrenade_ValentineBear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C.UserConstructionScript
// ()

void AWeapGrenade_ValentineBear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C.UserConstructionScript");

	AWeapGrenade_ValentineBear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C.ExecuteUbergraph_WeapGrenade_ValentineBear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGrenade_ValentineBear_C::ExecuteUbergraph_WeapGrenade_ValentineBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C.ExecuteUbergraph_WeapGrenade_ValentineBear");

	AWeapGrenade_ValentineBear_C_ExecuteUbergraph_WeapGrenade_ValentineBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

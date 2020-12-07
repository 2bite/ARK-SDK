// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_Flame_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCompoundBow_Flame.WeapCompoundBow_Flame_C.UserConstructionScript
// ()

void AWeapCompoundBow_Flame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Flame.WeapCompoundBow_Flame_C.UserConstructionScript");

	AWeapCompoundBow_Flame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompoundBow_Flame.WeapCompoundBow_Flame_C.OnHideProjectile
// ()

void AWeapCompoundBow_Flame_C::OnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Flame.WeapCompoundBow_Flame_C.OnHideProjectile");

	AWeapCompoundBow_Flame_C_OnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompoundBow_Flame.WeapCompoundBow_Flame_C.OnUnHideProjectile
// ()

void AWeapCompoundBow_Flame_C::OnUnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Flame.WeapCompoundBow_Flame_C.OnUnHideProjectile");

	AWeapCompoundBow_Flame_C_OnUnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompoundBow_Flame.WeapCompoundBow_Flame_C.ExecuteUbergraph_WeapCompoundBow_Flame
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCompoundBow_Flame_C::ExecuteUbergraph_WeapCompoundBow_Flame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Flame.WeapCompoundBow_Flame_C.ExecuteUbergraph_WeapCompoundBow_Flame");

	AWeapCompoundBow_Flame_C_ExecuteUbergraph_WeapCompoundBow_Flame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_Flame_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBow_Flame.WeapBow_Flame_C.UserConstructionScript
// ()

void AWeapBow_Flame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Flame.WeapBow_Flame_C.UserConstructionScript");

	AWeapBow_Flame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow_Flame.WeapBow_Flame_C.OnHideProjectile
// ()

void AWeapBow_Flame_C::OnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Flame.WeapBow_Flame_C.OnHideProjectile");

	AWeapBow_Flame_C_OnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow_Flame.WeapBow_Flame_C.OnUnHideProjectile
// ()

void AWeapBow_Flame_C::OnUnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Flame.WeapBow_Flame_C.OnUnHideProjectile");

	AWeapBow_Flame_C_OnUnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow_Flame.WeapBow_Flame_C.ExecuteUbergraph_WeapBow_Flame
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBow_Flame_C::ExecuteUbergraph_WeapBow_Flame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Flame.WeapBow_Flame_C.ExecuteUbergraph_WeapBow_Flame");

	AWeapBow_Flame_C_ExecuteUbergraph_WeapBow_Flame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

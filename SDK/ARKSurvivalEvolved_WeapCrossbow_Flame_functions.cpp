// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Flame_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.SetActive_3PArrow Flame
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Flame_C::SetActive_3PArrow_Flame(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.SetActive_3PArrow Flame");

	AWeapCrossbow_Flame_C_SetActive_3PArrow_Flame_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.UserConstructionScript
// ()

void AWeapCrossbow_Flame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.UserConstructionScript");

	AWeapCrossbow_Flame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.OnHideProjectile
// ()

void AWeapCrossbow_Flame_C::OnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.OnHideProjectile");

	AWeapCrossbow_Flame_C_OnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.OnUnHideProjectile
// ()

void AWeapCrossbow_Flame_C::OnUnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.OnUnHideProjectile");

	AWeapCrossbow_Flame_C_OnUnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.ExecuteUbergraph_WeapCrossbow_Flame
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Flame_C::ExecuteUbergraph_WeapCrossbow_Flame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.ExecuteUbergraph_WeapCrossbow_Flame");

	AWeapCrossbow_Flame_C_ExecuteUbergraph_WeapCrossbow_Flame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPlantSpeciesZ_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.UserConstructionScript
// ()

void AWeapPlantSpeciesZ_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.UserConstructionScript");

	AWeapPlantSpeciesZ_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.StartSecondaryActionEvent
// ()

void AWeapPlantSpeciesZ_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.StartSecondaryActionEvent");

	AWeapPlantSpeciesZ_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.BPFiredWeapon
// ()

void AWeapPlantSpeciesZ_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.BPFiredWeapon");

	AWeapPlantSpeciesZ_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ROS_UpdateQuickfire
// ()
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPlantSpeciesZ_C::ROS_UpdateQuickfire(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ROS_UpdateQuickfire");

	AWeapPlantSpeciesZ_C_ROS_UpdateQuickfire_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ExecuteUbergraph_WeapPlantSpeciesZ
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPlantSpeciesZ_C::ExecuteUbergraph_WeapPlantSpeciesZ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ExecuteUbergraph_WeapPlantSpeciesZ");

	AWeapPlantSpeciesZ_C_ExecuteUbergraph_WeapPlantSpeciesZ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

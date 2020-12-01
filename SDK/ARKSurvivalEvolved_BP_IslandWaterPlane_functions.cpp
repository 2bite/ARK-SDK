// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_IslandWaterPlane_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.SetFoamIntensity
// ()
// Parameters:
// float                          FoamIntensity                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_IslandWaterPlane_C::SetFoamIntensity(float FoamIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.SetFoamIntensity");

	ABP_IslandWaterPlane_C_SetFoamIntensity_Params params;
	params.FoamIntensity = FoamIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UpdateSun
// ()

void ABP_IslandWaterPlane_C::UpdateSun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UpdateSun");

	ABP_IslandWaterPlane_C_UpdateSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UserConstructionScript
// ()

void ABP_IslandWaterPlane_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UserConstructionScript");

	ABP_IslandWaterPlane_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature
// ()

void ABP_IslandWaterPlane_C::BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature");

	ABP_IslandWaterPlane_C_BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ReceiveBeginPlay
// ()

void ABP_IslandWaterPlane_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ReceiveBeginPlay");

	ABP_IslandWaterPlane_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.AutoUpdateValues
// ()

void ABP_IslandWaterPlane_C::AutoUpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.AutoUpdateValues");

	ABP_IslandWaterPlane_C_AutoUpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ExecuteUbergraph_BP_IslandWaterPlane
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_IslandWaterPlane_C::ExecuteUbergraph_BP_IslandWaterPlane(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ExecuteUbergraph_BP_IslandWaterPlane");

	ABP_IslandWaterPlane_C_ExecuteUbergraph_BP_IslandWaterPlane_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

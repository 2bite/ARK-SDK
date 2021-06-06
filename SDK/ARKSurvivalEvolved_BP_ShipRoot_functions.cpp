// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ShipRoot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipRoot.BP_ShipRoot_C.GetMatineeLengthsAndPlayRates
// ()
// Parameters:
// struct FVector2D               WarmUp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Loop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Cooldown                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShipRoot_C::GetMatineeLengthsAndPlayRates(struct FVector2D* WarmUp, struct FVector2D* Loop, struct FVector2D* Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.GetMatineeLengthsAndPlayRates");

	ABP_ShipRoot_C_GetMatineeLengthsAndPlayRates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WarmUp != nullptr)
		*WarmUp = params.WarmUp;
	if (Loop != nullptr)
		*Loop = params.Loop;
	if (Cooldown != nullptr)
		*Cooldown = params.Cooldown;
}


// Function BP_ShipRoot.BP_ShipRoot_C.BindDCM
// ()

void ABP_ShipRoot_C::BindDCM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.BindDCM");

	ABP_ShipRoot_C_BindDCM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipRoot.BP_ShipRoot_C.UserConstructionScript
// ()

void ABP_ShipRoot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.UserConstructionScript");

	ABP_ShipRoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipRoot.BP_ShipRoot_C.BindMatineeUpdateFromDCM
// ()

void ABP_ShipRoot_C::BindMatineeUpdateFromDCM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.BindMatineeUpdateFromDCM");

	ABP_ShipRoot_C_BindMatineeUpdateFromDCM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipRoot.BP_ShipRoot_C.OnDCMUpdated
// ()

void ABP_ShipRoot_C::OnDCMUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.OnDCMUpdated");

	ABP_ShipRoot_C_OnDCMUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipRoot.BP_ShipRoot_C.ReceiveBeginPlay
// ()

void ABP_ShipRoot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.ReceiveBeginPlay");

	ABP_ShipRoot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipRoot.BP_ShipRoot_C.RecieveMatineeUpdated
// ()

void ABP_ShipRoot_C::RecieveMatineeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.RecieveMatineeUpdated");

	ABP_ShipRoot_C_RecieveMatineeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipRoot.BP_ShipRoot_C.ExecuteUbergraph_BP_ShipRoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipRoot_C::ExecuteUbergraph_BP_ShipRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.ExecuteUbergraph_BP_ShipRoot");

	ABP_ShipRoot_C_ExecuteUbergraph_BP_ShipRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SeatedTurretHUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.NotifyDismount
// ()

void ABuff_SeatedTurretHUD_C::NotifyDismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.NotifyDismount");

	ABuff_SeatedTurretHUD_C_NotifyDismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.BPGetHUDElements
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_SeatedTurretHUD_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.BPGetHUDElements");

	ABuff_SeatedTurretHUD_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.UserConstructionScript
// ()

void ABuff_SeatedTurretHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.UserConstructionScript");

	ABuff_SeatedTurretHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.ExecuteUbergraph_Buff_SeatedTurretHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SeatedTurretHUD_C::ExecuteUbergraph_Buff_SeatedTurretHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.ExecuteUbergraph_Buff_SeatedTurretHUD");

	ABuff_SeatedTurretHUD_C_ExecuteUbergraph_Buff_SeatedTurretHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

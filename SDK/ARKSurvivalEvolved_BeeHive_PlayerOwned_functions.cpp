// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeeHive_PlayerOwned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABeeHive_PlayerOwned_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPTryMultiUse");

	ABeeHive_PlayerOwned_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPGetInfoFromConsumedItemForPlacedStructure
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient)
// Parameters:
// class UPrimalItem**            ItemToConsumed                 (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_PlayerOwned_C::STATIC_BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem** ItemToConsumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPGetInfoFromConsumedItemForPlacedStructure");

	ABeeHive_PlayerOwned_C_BPGetInfoFromConsumedItemForPlacedStructure_Params params;
	params.ItemToConsumed = ItemToConsumed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUpdateItemVisuals
// ()

void ABeeHive_PlayerOwned_C::BPUpdateItemVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUpdateItemVisuals");

	ABeeHive_PlayerOwned_C_BPUpdateItemVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUnstasis
// ()

void ABeeHive_PlayerOwned_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUnstasis");

	ABeeHive_PlayerOwned_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.UserConstructionScript
// ()

void ABeeHive_PlayerOwned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.UserConstructionScript");

	ABeeHive_PlayerOwned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveBeginPlay
// ()

void ABeeHive_PlayerOwned_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveBeginPlay");

	ABeeHive_PlayerOwned_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveDestroyed
// ()

void ABeeHive_PlayerOwned_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveDestroyed");

	ABeeHive_PlayerOwned_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ExecuteUbergraph_BeeHive_PlayerOwned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_PlayerOwned_C::ExecuteUbergraph_BeeHive_PlayerOwned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ExecuteUbergraph_BeeHive_PlayerOwned");

	ABeeHive_PlayerOwned_C_ExecuteUbergraph_BeeHive_PlayerOwned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

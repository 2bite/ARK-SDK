// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem
// (Native, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPrimalItem**            ToOwnerItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTorch_C::ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem");

	UPrimalItem_WeaponTorch_C_ApplyingSkinOntoItem_Params params;
	params.ToOwnerItem = ToOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem
// (Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTorch_C::RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem");

	UPrimalItem_WeaponTorch_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick
// ()
// Parameters:
// class UPrimalItem**            OwnerItem                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTorch_C::SkinEquippedBlueprintTick(class UPrimalItem** OwnerItem, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick");

	UPrimalItem_WeaponTorch_C_SkinEquippedBlueprintTick_Params params;
	params.OwnerItem = OwnerItem;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_WeaponTorch_C::BPPreventUseOntoItem(class UPrimalItem** DestinationItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem");

	UPrimalItem_WeaponTorch_C_BPPreventUseOntoItem_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTorch_C::ExecuteUbergraph_PrimalItem_WeaponTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch");

	UPrimalItem_WeaponTorch_C_ExecuteUbergraph_PrimalItem_WeaponTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

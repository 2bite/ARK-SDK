// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCanoe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCanoe.PrimalItemCanoe_C.BPCanUse
// ()
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemCanoe_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.BPCanUse");

	UPrimalItemCanoe_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemIcon
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UPrimalItemCanoe_C::BPGetItemIcon(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemIcon");

	UPrimalItemCanoe_C_BPGetItemIcon_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomIconMaterialParent
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UPrimalItemCanoe_C::BPGetCustomIconMaterialParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomIconMaterialParent");

	UPrimalItemCanoe_C_BPGetCustomIconMaterialParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.SetColors
// (Static, MulticastDelegate, Public, Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void UPrimalItemCanoe_C::STATIC_SetColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.SetColors");

	UPrimalItemCanoe_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPInitIconMaterial
// ()

void UPrimalItemCanoe_C::BPInitIconMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.BPInitIconMaterial");

	UPrimalItemCanoe_C_BPInitIconMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemName
// (NetRequest, Exec, Static, MulticastDelegate, Public, Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class FString*                 ItemNameIn                     (Parm, ZeroConstructor)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemCanoe_C::STATIC_BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemName");

	UPrimalItemCanoe_C_BPGetItemName_Params params;
	params.ItemNameIn = ItemNameIn;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomDurabilityText
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemCanoe_C::STATIC_BPGetCustomDurabilityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomDurabilityText");

	UPrimalItemCanoe_C_BPGetCustomDurabilityText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemDurabilityPercentage
// (NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalItemCanoe_C::STATIC_BPGetItemDurabilityPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemDurabilityPercentage");

	UPrimalItemCanoe_C_BPGetItemDurabilityPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemCanoe.PrimalItemCanoe_C.ExecuteUbergraph_PrimalItemCanoe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCanoe_C::ExecuteUbergraph_PrimalItemCanoe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCanoe.PrimalItemCanoe_C.ExecuteUbergraph_PrimalItemCanoe");

	UPrimalItemCanoe_C_ExecuteUbergraph_PrimalItemCanoe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

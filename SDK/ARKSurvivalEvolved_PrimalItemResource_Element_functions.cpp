// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Element_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)

void UPrimalItemResource_Element_C::BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand");

	UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params params;
	params.ForPC = ForPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;
}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
// (Exec, Static, MulticastDelegate, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalDinoCharacter*    Shapeshifter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetMounted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Element_C::STATIC_FindShapeshifter(class APrimalDinoCharacter** Shapeshifter, bool* RetMounted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter");

	UPrimalItemResource_Element_C_FindShapeshifter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Shapeshifter != nullptr)
		*Shapeshifter = params.Shapeshifter;
	if (RetMounted != nullptr)
		*RetMounted = params.RetMounted;
}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
// (NetReliable, NetMulticast, MulticastDelegate, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPrimalItemResource_Element_C::BPPreUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem");

	UPrimalItemResource_Element_C_BPPreUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemResource_Element_C::STATIC_BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse");

	UPrimalItemResource_Element_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemResource_Element_C::BPSupportUseOntoItem(class UPrimalItem** DestinationItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem");

	UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Element_C::BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem");

	UPrimalItemResource_Element_C_BPUsedOntoItem_Params params;
	params.DestinationItem = DestinationItem;
	params.AdditionalData = AdditionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.ExecuteUbergraph_PrimalItemResource_Element
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Element_C::ExecuteUbergraph_PrimalItemResource_Element(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.ExecuteUbergraph_PrimalItemResource_Element");

	UPrimalItemResource_Element_C_ExecuteUbergraph_PrimalItemResource_Element_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemName
// ()
// Parameters:
// class FString*                 ItemNameIn                     (Parm, ZeroConstructor)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemSkin_ChibiDino_Base_C::BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemName");

	UPrimalItemSkin_ChibiDino_Base_C_BPGetItemName_Params params;
	params.ItemNameIn = ItemNameIn;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BlueprintEquipped");

	UPrimalItemSkin_ChibiDino_Base_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPSetupHUDIconMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic** theMID                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::BPSetupHUDIconMaterial(class UMaterialInstanceDynamic** theMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPSetupHUDIconMaterial");

	UPrimalItemSkin_ChibiDino_Base_C_BPSetupHUDIconMaterial_Params params;
	params.theMID = theMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.Get XPRequired for PreviousLevel
// ()
// Parameters:
// float                          XPOut                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::Get_XPRequired_for_PreviousLevel(float* XPOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.Get XPRequired for PreviousLevel");

	UPrimalItemSkin_ChibiDino_Base_C_Get_XPRequired_for_PreviousLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XPOut != nullptr)
		*XPOut = params.XPOut;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetCustomInventoryWidgetText
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemSkin_ChibiDino_Base_C::STATIC_BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetCustomInventoryWidgetText");

	UPrimalItemSkin_ChibiDino_Base_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.GetXPRequiredForNextLevel
// ()
// Parameters:
// float                          XPOut                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::GetXPRequiredForNextLevel(float* XPOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.GetXPRequiredForNextLevel");

	UPrimalItemSkin_ChibiDino_Base_C_GetXPRequiredForNextLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XPOut != nullptr)
		*XPOut = params.XPOut;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDurabilityPercentage
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalItemSkin_ChibiDino_Base_C::BPGetItemDurabilityPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDurabilityPercentage");

	UPrimalItemSkin_ChibiDino_Base_C_BPGetItemDurabilityPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPClientHandleItemNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::BPClientHandleItemNetExecCommand(struct FName* CommandName, class AShooterPlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPClientHandleItemNetExecCommand");

	UPrimalItemSkin_ChibiDino_Base_C_BPClientHandleItemNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.RefreshLevelData
// (NetReliable, Native, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::STATIC_RefreshLevelData(class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.RefreshLevelData");

	UPrimalItemSkin_ChibiDino_Base_C_RefreshLevelData_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.AddXP
// (NetReliable, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          XPAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::STATIC_AddXP(float XPAmount, class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.AddXP");

	UPrimalItemSkin_ChibiDino_Base_C_AddXP_Params params;
	params.XPAmount = XPAmount;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPEquippedItemOnXPEarning
// ()
// Parameters:
// class APrimalCharacter**       forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         howMuchXP                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EXPType>*          TheXPType                      (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::BPEquippedItemOnXPEarning(class APrimalCharacter** forChar, float* howMuchXP, TEnumAsByte<EXPType>* TheXPType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPEquippedItemOnXPEarning");

	UPrimalItemSkin_ChibiDino_Base_C_BPEquippedItemOnXPEarning_Params params;
	params.forChar = forChar;
	params.howMuchXP = howMuchXP;
	params.TheXPType = TheXPType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPInitFromItemNetInfo
// (NetReliable, Native, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)

void UPrimalItemSkin_ChibiDino_Base_C::STATIC_BPInitFromItemNetInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPInitFromItemNetInfo");

	UPrimalItemSkin_ChibiDino_Base_C_BPInitFromItemNetInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDescription
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Private, HasOutParms, HasDefaults, Const)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemSkin_ChibiDino_Base_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPGetItemDescription");

	UPrimalItemSkin_ChibiDino_Base_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPAddedAttachments
// ()

void UPrimalItemSkin_ChibiDino_Base_C::BPAddedAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.BPAddedAttachments");

	UPrimalItemSkin_ChibiDino_Base_C_BPAddedAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Base_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base");

	UPrimalItemSkin_ChibiDino_Base_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

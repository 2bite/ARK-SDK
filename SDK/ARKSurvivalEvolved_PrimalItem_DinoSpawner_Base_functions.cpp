// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DinoSpawner_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetTextColor
// ()
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UPrimalItem_DinoSpawner_Base_C::BPGetCustomInventoryWidgetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetTextColor");

	UPrimalItem_DinoSpawner_Base_C_BPGetCustomInventoryWidgetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetText
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_DinoSpawner_Base_C::BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetText");

	UPrimalItem_DinoSpawner_Base_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.DoesClientHaveStatData
// ()
// Parameters:
// bool                           HasData                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DinoSpawner_Base_C::DoesClientHaveStatData(bool* HasData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.DoesClientHaveStatData");

	UPrimalItem_DinoSpawner_Base_C_DoesClientHaveStatData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasData != nullptr)
		*HasData = params.HasData;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPCanUse
// ()
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_DinoSpawner_Base_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPCanUse");

	UPrimalItem_DinoSpawner_Base_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoColorizationData
// (Exec, Native, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// bool                           HasAnyColorData                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ColorData                      (Parm, OutParm, ZeroConstructor)

void UPrimalItem_DinoSpawner_Base_C::GetDinoColorizationData(bool* HasAnyColorData, TArray<unsigned char>* ColorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoColorizationData");

	UPrimalItem_DinoSpawner_Base_C_GetDinoColorizationData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAnyColorData != nullptr)
		*HasAnyColorData = params.HasAnyColorData;
	if (ColorData != nullptr)
		*ColorData = params.ColorData;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.PreDinoSpawned
// ()

void UPrimalItem_DinoSpawner_Base_C::PreDinoSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.PreDinoSpawned");

	UPrimalItem_DinoSpawner_Base_C_PreDinoSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.CopyDinoStatsFromDino
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalCharacterStatusComponent* StatusComp                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    StatOffsets                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          Colorization                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPrimalItem_DinoSpawner_Base_C::CopyDinoStatsFromDino(class UPrimalCharacterStatusComponent* StatusComp, TArray<int>* StatOffsets, TArray<unsigned char>* Colorization)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.CopyDinoStatsFromDino");

	UPrimalItem_DinoSpawner_Base_C_CopyDinoStatsFromDino_Params params;
	params.StatusComp = StatusComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatOffsets != nullptr)
		*StatOffsets = params.StatOffsets;
	if (Colorization != nullptr)
		*Colorization = params.Colorization;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetStatDisplayString
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            StatConvertMapIndex            (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StatDisplay                    (Parm, OutParm, ZeroConstructor)
// class FString                  ValueDisplay                   (Parm, OutParm, ZeroConstructor)
// bool                           ShowInTooltip                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DinoSpawner_Base_C::STATIC_GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue> Stat, int Value, int StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetStatDisplayString");

	UPrimalItem_DinoSpawner_Base_C_GetStatDisplayString_Params params;
	params.Stat = Stat;
	params.Value = Value;
	params.StatConvertMapIndex = StatConvertMapIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatDisplay != nullptr)
		*StatDisplay = params.StatDisplay;
	if (ValueDisplay != nullptr)
		*ValueDisplay = params.ValueDisplay;
	if (ShowInTooltip != nullptr)
		*ShowInTooltip = params.ShowInTooltip;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoStat
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> statType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumDinoLevels                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StatMapIndexUsed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DinoSpawner_Base_C::STATIC_GetDinoStat(TEnumAsByte<EPrimalCharacterStatusValue> statType, int* NumDinoLevels, int* StatMapIndexUsed, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoStat");

	UPrimalItem_DinoSpawner_Base_C_GetDinoStat_Params params;
	params.statType = statType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumDinoLevels != nullptr)
		*NumDinoLevels = params.NumDinoLevels;
	if (StatMapIndexUsed != nullptr)
		*StatMapIndexUsed = params.StatMapIndexUsed;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetItemDescription
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_DinoSpawner_Base_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetItemDescription");

	UPrimalItem_DinoSpawner_Base_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.OnDinoSpawned
// ()
// Parameters:
// class APrimalDinoCharacter*    NewDino                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DinoSpawner_Base_C::OnDinoSpawned(class APrimalDinoCharacter* NewDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.OnDinoSpawned");

	UPrimalItem_DinoSpawner_Base_C_OnDinoSpawned_Params params;
	params.NewDino = NewDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BlueprintUsed
// ()

void UPrimalItem_DinoSpawner_Base_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BlueprintUsed");

	UPrimalItem_DinoSpawner_Base_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.ExecuteUbergraph_PrimalItem_DinoSpawner_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_DinoSpawner_Base_C::ExecuteUbergraph_PrimalItem_DinoSpawner_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.ExecuteUbergraph_PrimalItem_DinoSpawner_Base");

	UPrimalItem_DinoSpawner_Base_C_ExecuteUbergraph_PrimalItem_DinoSpawner_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moschops_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Moschops_Character_BP.Moschops_Character_BP_C.CapHarvestStats
// ()

void AMoschops_Character_BP_C::CapHarvestStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.CapHarvestStats");

	AMoschops_Character_BP_C_CapHarvestStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.Get Taming Food Item List
// ()
// Parameters:
// TArray<class UClass*>          Item                           (Parm, OutParm, ZeroConstructor)

void AMoschops_Character_BP_C::Get_Taming_Food_Item_List(TArray<class UClass*>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.Get Taming Food Item List");

	AMoschops_Character_BP_C_Get_Taming_Food_Item_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPUntamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_C::BPUntamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPUntamedConsumeFoodItem");

	AMoschops_Character_BP_C_BPUntamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.OnRep_RequiredTamingFoodIndex
// ()

void AMoschops_Character_BP_C::OnRep_RequiredTamingFoodIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.OnRep_RequiredTamingFoodIndex");

	AMoschops_Character_BP_C_OnRep_RequiredTamingFoodIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoschops_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPShouldForceFlee");

	AMoschops_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPCanTargetCorpse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoschops_Character_BP_C::BPCanTargetCorpse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPCanTargetCorpse");

	AMoschops_Character_BP_C_BPCanTargetCorpse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoschops_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BlueprintCanAttack");

	AMoschops_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPClientDoMultiUse");

	AMoschops_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPDoHarvestAttack
// ()
// Parameters:
// int*                           harvestIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_C::BPDoHarvestAttack(int* harvestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPDoHarvestAttack");

	AMoschops_Character_BP_C_BPDoHarvestAttack_Params params;
	params.harvestIndex = harvestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.Get Current Harvest Level
// ()
// Parameters:
// int                            Current_Level                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_C::Get_Current_Harvest_Level(int* Current_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.Get Current Harvest Level");

	AMoschops_Character_BP_C_Get_Current_Harvest_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Level != nullptr)
		*Current_Level = params.Current_Level;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPNotifyLevelUp");

	AMoschops_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMoschops_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPModifyHarvestingQuantity");

	AMoschops_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPModifyHarvestingWeightsArray
// (NetReliable, Native, NetResponse, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// TArray<float>                  resourceWeightsIn              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimalItem*>     resourceItems                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  resourceWeightsOut             (Parm, OutParm, ZeroConstructor)

void AMoschops_Character_BP_C::BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPModifyHarvestingWeightsArray");

	AMoschops_Character_BP_C_BPModifyHarvestingWeightsArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (resourceWeightsIn != nullptr)
		*resourceWeightsIn = params.resourceWeightsIn;
	if (resourceItems != nullptr)
		*resourceItems = params.resourceItems;
	if (resourceWeightsOut != nullptr)
		*resourceWeightsOut = params.resourceWeightsOut;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.Harvest Multiplier Level Up
// ()
// Parameters:
// int                            UseEntryIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_C::Harvest_Multiplier_Level_Up(int UseEntryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.Harvest Multiplier Level Up");

	AMoschops_Character_BP_C_Harvest_Multiplier_Level_Up_Params params;
	params.UseEntryIndex = UseEntryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.MakeUseEntryString
// (NetReliable, Exec, Event, NetResponse, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMoschops_Character_BP_C::MakeUseEntryString(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.MakeUseEntryString");

	AMoschops_Character_BP_C_MakeUseEntryString_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMoschops_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPTryMultiUse");

	AMoschops_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.Add Level Up Entries
// (NetRequest, Exec, Static, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// TArray<struct FMultiUseEntry>  FullEntryList                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMoschops_Character_BP_C::STATIC_Add_Level_Up_Entries(TArray<struct FMultiUseEntry>* FullEntryList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.Add Level Up Entries");

	AMoschops_Character_BP_C_Add_Level_Up_Entries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FullEntryList != nullptr)
		*FullEntryList = params.FullEntryList;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPGetMultiUseEntries
// (Net, Native, NetMulticast, Public, Private, Delegate, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AMoschops_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPGetMultiUseEntries");

	AMoschops_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.UserConstructionScript
// (Exec, Native, Event, Static, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void AMoschops_Character_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.UserConstructionScript");

	AMoschops_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.AnimNotify_HarvestEnd
// ()

void AMoschops_Character_BP_C::AnimNotify_HarvestEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.AnimNotify_HarvestEnd");

	AMoschops_Character_BP_C_AnimNotify_HarvestEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.ReceiveBeginPlay
// ()

void AMoschops_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.ReceiveBeginPlay");

	AMoschops_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPSetupTamed");

	AMoschops_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.BPResetClone
// ()

void AMoschops_Character_BP_C::BPResetClone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.BPResetClone");

	AMoschops_Character_BP_C_BPResetClone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP.Moschops_Character_BP_C.ExecuteUbergraph_Moschops_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_C::ExecuteUbergraph_Moschops_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP.Moschops_Character_BP_C.ExecuteUbergraph_Moschops_Character_BP");

	AMoschops_Character_BP_C_ExecuteUbergraph_Moschops_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

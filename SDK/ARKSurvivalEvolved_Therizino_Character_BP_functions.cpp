// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Therizino_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Therizino_Character_BP.Therizino_Character_BP_C.Cap Harvest Stats
// ()

void ATherizino_Character_BP_C::Cap_Harvest_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.Cap Harvest Stats");

	ATherizino_Character_BP_C_Cap_Harvest_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingWeightsArray
// ()
// Parameters:
// TArray<float>                  resourceWeightsIn              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimalItem*>     resourceItems                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  resourceWeightsOut             (Parm, OutParm, ZeroConstructor)

void ATherizino_Character_BP_C::BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingWeightsArray");

	ATherizino_Character_BP_C_BPModifyHarvestingWeightsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (resourceWeightsIn != nullptr)
		*resourceWeightsIn = params.resourceWeightsIn;
	if (resourceItems != nullptr)
		*resourceItems = params.resourceItems;
	if (resourceWeightsOut != nullptr)
		*resourceWeightsOut = params.resourceWeightsOut;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestDamage
// ()
// Parameters:
// class UPrimalHarvestingComponent** harvestComponent               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inDamage                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATherizino_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestDamage");

	ATherizino_Character_BP_C_BPModifyHarvestDamage_Params params;
	params.harvestComponent = harvestComponent;
	params.inDamage = inDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.Multiply Items by Attack Type
// ()
// Parameters:
// int                            InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ATherizino_Character_BP_C::Multiply_Items_by_Attack_Type(int InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.Multiply Items by Attack Type");

	ATherizino_Character_BP_C_Multiply_Items_by_Attack_Type_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ATherizino_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPClientDoMultiUse");

	ATherizino_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPDoHarvestAttack
// ()
// Parameters:
// int*                           harvestIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void ATherizino_Character_BP_C::BPDoHarvestAttack(int* harvestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPDoHarvestAttack");

	ATherizino_Character_BP_C_BPDoHarvestAttack_Params params;
	params.harvestIndex = harvestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATherizino_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanAttack");

	ATherizino_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.SetClawAttackAnimByMovement
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            Attack_index                   (Parm, ZeroConstructor, IsPlainOldData)

void ATherizino_Character_BP_C::SetClawAttackAnimByMovement(int Attack_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.SetClawAttackAnimByMovement");

	ATherizino_Character_BP_C_SetClawAttackAnimByMovement_Params params;
	params.Attack_index = Attack_index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATherizino_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanRiderAttack");

	ATherizino_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATherizino_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingQuantity");

	ATherizino_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.GetCurrentHarvestLevel
// ()
// Parameters:
// int                            Current_Level                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATherizino_Character_BP_C::GetCurrentHarvestLevel(int* Current_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.GetCurrentHarvestLevel");

	ATherizino_Character_BP_C_GetCurrentHarvestLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Level != nullptr)
		*Current_Level = params.Current_Level;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void ATherizino_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPNotifyLevelUp");

	ATherizino_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPGetMultiUseEntries
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATherizino_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPGetMultiUseEntries");

	ATherizino_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.Harvest Multiplier Level Up
// ()
// Parameters:
// int                            UseEntryIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ATherizino_Character_BP_C::Harvest_Multiplier_Level_Up(int UseEntryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.Harvest Multiplier Level Up");

	ATherizino_Character_BP_C_Harvest_Multiplier_Level_Up_Params params;
	params.UseEntryIndex = UseEntryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.MakeUseEntryString
// (NetRequest, Native, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ATherizino_Character_BP_C::MakeUseEntryString(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.MakeUseEntryString");

	ATherizino_Character_BP_C_MakeUseEntryString_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATherizino_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPTryMultiUse");

	ATherizino_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.AddLevelUpEntries
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// TArray<struct FMultiUseEntry>  FullEntryList                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATherizino_Character_BP_C::STATIC_AddLevelUpEntries(TArray<struct FMultiUseEntry>* FullEntryList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.AddLevelUpEntries");

	ATherizino_Character_BP_C_AddLevelUpEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FullEntryList != nullptr)
		*FullEntryList = params.FullEntryList;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.UserConstructionScript
// ()

void ATherizino_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.UserConstructionScript");

	ATherizino_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_HarvestEnd
// ()

void ATherizino_Character_BP_C::AnimNotify_HarvestEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_HarvestEnd");

	ATherizino_Character_BP_C_AnimNotify_HarvestEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_PowerHarvestEnd
// ()

void ATherizino_Character_BP_C::AnimNotify_PowerHarvestEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_PowerHarvestEnd");

	ATherizino_Character_BP_C_AnimNotify_PowerHarvestEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.PlayLevelUpAnim
// ()

void ATherizino_Character_BP_C::PlayLevelUpAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.PlayLevelUpAnim");

	ATherizino_Character_BP_C_PlayLevelUpAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.ReceiveBeginPlay
// ()

void ATherizino_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.ReceiveBeginPlay");

	ATherizino_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.BPResetClone
// ()

void ATherizino_Character_BP_C::BPResetClone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.BPResetClone");

	ATherizino_Character_BP_C_BPResetClone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Therizino_Character_BP.Therizino_Character_BP_C.ExecuteUbergraph_Therizino_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATherizino_Character_BP_C::ExecuteUbergraph_Therizino_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_Character_BP.Therizino_Character_BP_C.ExecuteUbergraph_Therizino_Character_BP");

	ATherizino_Character_BP_C_ExecuteUbergraph_Therizino_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

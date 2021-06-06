// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_LoadoutDummy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth
// ()

void AStructure_LoadoutDummy_C::SetHotbarCurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth");

	AStructure_LoadoutDummy_C_SetHotbarCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed
// ()

void AStructure_LoadoutDummy_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed");

	AStructure_LoadoutDummy_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure");

	AStructure_LoadoutDummy_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse");

	AStructure_LoadoutDummy_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish");

	AStructure_LoadoutDummy_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor
// ()

void AStructure_LoadoutDummy_C::SetTextRendererColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor");

	AStructure_LoadoutDummy_C_SetTextRendererColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID
// ()

void AStructure_LoadoutDummy_C::OnRep_HotbarID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID");

	AStructure_LoadoutDummy_C_OnRep_HotbarID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::STATIC_CreateHotbarStructure(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure");

	AStructure_LoadoutDummy_C_CreateHotbarStructure_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Dummy_Everything(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything");

	AStructure_LoadoutDummy_C_Fill_Dummy_Everything_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Character_Everything(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything");

	AStructure_LoadoutDummy_C_Fill_Character_Everything_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Dummy_Inventory(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory");

	AStructure_LoadoutDummy_C_Fill_Dummy_Inventory_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Character_Inventory(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory");

	AStructure_LoadoutDummy_C_Fill_Character_Inventory_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Swap_Everything(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything");

	AStructure_LoadoutDummy_C_Swap_Everything_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Swap_All_Inventory(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory");

	AStructure_LoadoutDummy_C_Swap_All_Inventory_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Swap_All_Hotbar(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar");

	AStructure_LoadoutDummy_C_Swap_All_Hotbar_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Dummy_Hotbar(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar");

	AStructure_LoadoutDummy_C_Fill_Dummy_Hotbar_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Character_Hotbar(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar");

	AStructure_LoadoutDummy_C_Fill_Character_Hotbar_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Dummy_Equipment(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment");

	AStructure_LoadoutDummy_C_Fill_Dummy_Equipment_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::Fill_Character_Equipment(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment");

	AStructure_LoadoutDummy_C_Fill_Character_Equipment_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::SwapAllEquipment(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment");

	AStructure_LoadoutDummy_C_SwapAllEquipment_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_LoadoutDummy_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse");

	AStructure_LoadoutDummy_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_LoadoutDummy_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries");

	AStructure_LoadoutDummy_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript
// ()

void AStructure_LoadoutDummy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript");

	AStructure_LoadoutDummy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay");

	AStructure_LoadoutDummy_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay
// ()

void AStructure_LoadoutDummy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay");

	AStructure_LoadoutDummy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_LoadoutDummy_C::ExecuteUbergraph_Structure_LoadoutDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy");

	AStructure_LoadoutDummy_C_ExecuteUbergraph_Structure_LoadoutDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_HoverSkiff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPAllowCrafting
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_Spawner_HoverSkiff_C::STATIC_BPAllowCrafting(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPAllowCrafting");

	UPrimalItem_Spawner_HoverSkiff_C_BPAllowCrafting_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.GetValidSpawnTransform
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct UObject_FTransform      SpawnTransform                 (Parm, OutParm, IsPlainOldData)
// bool                           SpawnValid                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_HoverSkiff_C::STATIC_GetValidSpawnTransform(struct UObject_FTransform* SpawnTransform, bool* SpawnValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.GetValidSpawnTransform");

	UPrimalItem_Spawner_HoverSkiff_C_GetValidSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
	if (SpawnValid != nullptr)
		*SpawnValid = params.SpawnValid;
}


// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPCrafted
// ()

void UPrimalItem_Spawner_HoverSkiff_C::BPCrafted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPCrafted");

	UPrimalItem_Spawner_HoverSkiff_C_BPCrafted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.SpawnCraftedSkiff
// ()

void UPrimalItem_Spawner_HoverSkiff_C::SpawnCraftedSkiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.SpawnCraftedSkiff");

	UPrimalItem_Spawner_HoverSkiff_C_SpawnCraftedSkiff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_HoverSkiff_C::ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff");

	UPrimalItem_Spawner_HoverSkiff_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_HoverSail_Parent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.BPGetItemDescription
// ()
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_Spawner_HoverSail_Parent_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.BPGetItemDescription");

	UPrimalItem_Spawner_HoverSail_Parent_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.notify hoversail destroyed
// ()

void UPrimalItem_Spawner_HoverSail_Parent_C::notify_hoversail_destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.notify hoversail destroyed");

	UPrimalItem_Spawner_HoverSail_Parent_C_notify_hoversail_destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.Delaymount
// ()

void UPrimalItem_Spawner_HoverSail_Parent_C::Delaymount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.Delaymount");

	UPrimalItem_Spawner_HoverSail_Parent_C_Delaymount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.BPCanUse
// ()
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_Spawner_HoverSail_Parent_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.BPCanUse");

	UPrimalItem_Spawner_HoverSail_Parent_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.SpawnCraftedSkiff
// ()

void UPrimalItem_Spawner_HoverSail_Parent_C::SpawnCraftedSkiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.SpawnCraftedSkiff");

	UPrimalItem_Spawner_HoverSail_Parent_C_SpawnCraftedSkiff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_HoverSail_Parent_C::ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent");

	UPrimalItem_Spawner_HoverSail_Parent_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

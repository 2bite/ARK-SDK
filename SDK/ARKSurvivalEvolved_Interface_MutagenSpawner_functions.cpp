// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Interface_MutagenSpawner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.AdjustableSpawnDelayChanged
// ()

void UInterface_MutagenSpawner_C::AdjustableSpawnDelayChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.AdjustableSpawnDelayChanged");

	UInterface_MutagenSpawner_C_AdjustableSpawnDelayChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.itemPickedUp
// ()
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ByPC                           (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_MutagenSpawner_C::itemPickedUp(class AActor* Item, class APlayerController* ByPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.itemPickedUp");

	UInterface_MutagenSpawner_C_itemPickedUp_Params params;
	params.Item = Item;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.SpawnItem
// ()
// Parameters:
// class AActor*                  Manager                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedItem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_MutagenSpawner_C::SpawnItem(class AActor* Manager, class AActor** SpawnedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_MutagenSpawner.Interface_MutagenSpawner_C.SpawnItem");

	UInterface_MutagenSpawner_C_SpawnItem_Params params;
	params.Manager = Manager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedItem != nullptr)
		*SpawnedItem = params.SpawnedItem;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

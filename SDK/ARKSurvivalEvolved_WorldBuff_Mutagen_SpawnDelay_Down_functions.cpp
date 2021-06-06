// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldBuff_Mutagen_SpawnDelay_Down_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PreDeconstruction
// ()

void UWorldBuff_Mutagen_SpawnDelay_Down_C::PreDeconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PreDeconstruction");

	UWorldBuff_Mutagen_SpawnDelay_Down_C_PreDeconstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PostConstruction
// ()

void UWorldBuff_Mutagen_SpawnDelay_Down_C::PostConstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PostConstruction");

	UWorldBuff_Mutagen_SpawnDelay_Down_C_PostConstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldBuff_Mutagen_SpawnDelay_Down_C::ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down");

	UWorldBuff_Mutagen_SpawnDelay_Down_C_ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpawnPointActor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnPointActor.SpawnPointActor_C.UserConstructionScript
// ()

void ASpawnPointActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPointActor.SpawnPointActor_C.UserConstructionScript");

	ASpawnPointActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPointActor.SpawnPointActor_C.ExecuteUbergraph_SpawnPointActor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpawnPointActor_C::ExecuteUbergraph_SpawnPointActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPointActor.SpawnPointActor_C.ExecuteUbergraph_SpawnPointActor");

	ASpawnPointActor_C_ExecuteUbergraph_SpawnPointActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

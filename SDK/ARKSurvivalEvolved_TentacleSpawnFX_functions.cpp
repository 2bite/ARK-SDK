// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TentacleSpawnFX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TentacleSpawnFX.TentacleSpawnFX_C.UserConstructionScript
// ()

void ATentacleSpawnFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TentacleSpawnFX.TentacleSpawnFX_C.UserConstructionScript");

	ATentacleSpawnFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TentacleSpawnFX.TentacleSpawnFX_C.ReceiveBeginPlay
// ()

void ATentacleSpawnFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TentacleSpawnFX.TentacleSpawnFX_C.ReceiveBeginPlay");

	ATentacleSpawnFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TentacleSpawnFX.TentacleSpawnFX_C.ExecuteUbergraph_TentacleSpawnFX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATentacleSpawnFX_C::ExecuteUbergraph_TentacleSpawnFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TentacleSpawnFX.TentacleSpawnFX_C.ExecuteUbergraph_TentacleSpawnFX");

	ATentacleSpawnFX_C_ExecuteUbergraph_TentacleSpawnFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

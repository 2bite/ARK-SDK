// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KeepReleaseTargetOutOfMesh_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C.BuffTickServer
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KeepReleaseTargetOutOfMesh_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C.BuffTickServer");

	ABuff_KeepReleaseTargetOutOfMesh_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C.UserConstructionScript
// ()

void ABuff_KeepReleaseTargetOutOfMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C.UserConstructionScript");

	ABuff_KeepReleaseTargetOutOfMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C.ExecuteUbergraph_Buff_KeepReleaseTargetOutOfMesh
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KeepReleaseTargetOutOfMesh_C::ExecuteUbergraph_Buff_KeepReleaseTargetOutOfMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C.ExecuteUbergraph_Buff_KeepReleaseTargetOutOfMesh");

	ABuff_KeepReleaseTargetOutOfMesh_C_ExecuteUbergraph_Buff_KeepReleaseTargetOutOfMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

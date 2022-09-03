// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DestroyedMeshBase_IgnoreSelf_FastFade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ReceiveDestroyed
// ()

void ADestroyedMeshBase_IgnoreSelf_FastFade_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ReceiveDestroyed");

	ADestroyedMeshBase_IgnoreSelf_FastFade_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.SetFadingStaticMesh
// ()
// Parameters:
// class UStaticMesh**            TheMesh                        (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMeshBase_IgnoreSelf_FastFade_C::SetFadingStaticMesh(class UStaticMesh** TheMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.SetFadingStaticMesh");

	ADestroyedMeshBase_IgnoreSelf_FastFade_C_SetFadingStaticMesh_Params params;
	params.TheMesh = TheMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.UserConstructionScript
// ()

void ADestroyedMeshBase_IgnoreSelf_FastFade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.UserConstructionScript");

	ADestroyedMeshBase_IgnoreSelf_FastFade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMeshBase_IgnoreSelf_FastFade_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ReceiveTick");

	ADestroyedMeshBase_IgnoreSelf_FastFade_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_FastFade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMeshBase_IgnoreSelf_FastFade_C::ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_FastFade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C.ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_FastFade");

	ADestroyedMeshBase_IgnoreSelf_FastFade_C_ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_FastFade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DestroyedMesh_SimpleFadeOut_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingSkeletalMesh
// ()
// Parameters:
// class USkeletalMesh**          TheMesh                        (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMesh_SimpleFadeOut_C::SetFadingSkeletalMesh(class USkeletalMesh** TheMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingSkeletalMesh");

	ADestroyedMesh_SimpleFadeOut_C_SetFadingSkeletalMesh_Params params;
	params.TheMesh = TheMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingStaticMesh
// ()
// Parameters:
// class UStaticMesh**            TheMesh                        (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMesh_SimpleFadeOut_C::SetFadingStaticMesh(class UStaticMesh** TheMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingStaticMesh");

	ADestroyedMesh_SimpleFadeOut_C_SetFadingStaticMesh_Params params;
	params.TheMesh = TheMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.GetFadingMeshComponent
// ()
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMeshComponent* ADestroyedMesh_SimpleFadeOut_C::GetFadingMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.GetFadingMeshComponent");

	ADestroyedMesh_SimpleFadeOut_C_GetFadingMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.UserConstructionScript
// ()

void ADestroyedMesh_SimpleFadeOut_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.UserConstructionScript");

	ADestroyedMesh_SimpleFadeOut_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMesh_SimpleFadeOut_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ReceiveTick");

	ADestroyedMesh_SimpleFadeOut_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ExecuteUbergraph_DestroyedMesh_SimpleFadeOut
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMesh_SimpleFadeOut_C::ExecuteUbergraph_DestroyedMesh_SimpleFadeOut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ExecuteUbergraph_DestroyedMesh_SimpleFadeOut");

	ADestroyedMesh_SimpleFadeOut_C_ExecuteUbergraph_DestroyedMesh_SimpleFadeOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

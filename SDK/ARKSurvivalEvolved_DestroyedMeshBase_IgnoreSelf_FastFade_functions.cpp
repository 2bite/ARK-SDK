// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DestroyedMeshBase_IgnoreSelf_FastFade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

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

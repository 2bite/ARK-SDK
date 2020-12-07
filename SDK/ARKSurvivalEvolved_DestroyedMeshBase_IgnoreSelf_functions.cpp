// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DestroyedMeshBase_IgnoreSelf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C.UserConstructionScript
// ()

void ADestroyedMeshBase_IgnoreSelf_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C.UserConstructionScript");

	ADestroyedMeshBase_IgnoreSelf_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C.ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMeshBase_IgnoreSelf_C::ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C.ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf");

	ADestroyedMeshBase_IgnoreSelf_C_ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

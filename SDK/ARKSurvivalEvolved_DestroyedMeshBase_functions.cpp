// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DestroyedMeshBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DestroyedMeshBase.DestroyedMeshBase_C.UserConstructionScript
// ()

void ADestroyedMeshBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase.DestroyedMeshBase_C.UserConstructionScript");

	ADestroyedMeshBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DestroyedMeshBase.DestroyedMeshBase_C.ExecuteUbergraph_DestroyedMeshBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADestroyedMeshBase_C::ExecuteUbergraph_DestroyedMeshBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DestroyedMeshBase.DestroyedMeshBase_C.ExecuteUbergraph_DestroyedMeshBase");

	ADestroyedMeshBase_C_ExecuteUbergraph_DestroyedMeshBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

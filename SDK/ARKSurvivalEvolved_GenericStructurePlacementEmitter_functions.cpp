// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GenericStructurePlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericStructurePlacementEmitter.GenericStructurePlacementEmitter_C.UserConstructionScript
// ()

void AGenericStructurePlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericStructurePlacementEmitter.GenericStructurePlacementEmitter_C.UserConstructionScript");

	AGenericStructurePlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericStructurePlacementEmitter.GenericStructurePlacementEmitter_C.ExecuteUbergraph_GenericStructurePlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenericStructurePlacementEmitter_C::ExecuteUbergraph_GenericStructurePlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericStructurePlacementEmitter.GenericStructurePlacementEmitter_C.ExecuteUbergraph_GenericStructurePlacementEmitter");

	AGenericStructurePlacementEmitter_C_ExecuteUbergraph_GenericStructurePlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

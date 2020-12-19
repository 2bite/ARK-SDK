// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GenericMetalPlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericMetalPlacementEmitter.GenericMetalPlacementEmitter_C.UserConstructionScript
// ()

void AGenericMetalPlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericMetalPlacementEmitter.GenericMetalPlacementEmitter_C.UserConstructionScript");

	AGenericMetalPlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericMetalPlacementEmitter.GenericMetalPlacementEmitter_C.ExecuteUbergraph_GenericMetalPlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMetalPlacementEmitter_C::ExecuteUbergraph_GenericMetalPlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericMetalPlacementEmitter.GenericMetalPlacementEmitter_C.ExecuteUbergraph_GenericMetalPlacementEmitter");

	AGenericMetalPlacementEmitter_C_ExecuteUbergraph_GenericMetalPlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

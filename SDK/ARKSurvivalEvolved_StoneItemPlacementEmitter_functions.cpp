// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneItemPlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneItemPlacementEmitter.StoneItemPlacementEmitter_C.UserConstructionScript
// ()

void AStoneItemPlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneItemPlacementEmitter.StoneItemPlacementEmitter_C.UserConstructionScript");

	AStoneItemPlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoneItemPlacementEmitter.StoneItemPlacementEmitter_C.ExecuteUbergraph_StoneItemPlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStoneItemPlacementEmitter_C::ExecuteUbergraph_StoneItemPlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneItemPlacementEmitter.StoneItemPlacementEmitter_C.ExecuteUbergraph_StoneItemPlacementEmitter");

	AStoneItemPlacementEmitter_C_ExecuteUbergraph_StoneItemPlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

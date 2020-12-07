// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TriCeilingTek_PlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TriCeilingTek_PlacementEmitter.TriCeilingTek_PlacementEmitter_C.UserConstructionScript
// ()

void ATriCeilingTek_PlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TriCeilingTek_PlacementEmitter.TriCeilingTek_PlacementEmitter_C.UserConstructionScript");

	ATriCeilingTek_PlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriCeilingTek_PlacementEmitter.TriCeilingTek_PlacementEmitter_C.ExecuteUbergraph_TriCeilingTek_PlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATriCeilingTek_PlacementEmitter_C::ExecuteUbergraph_TriCeilingTek_PlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriCeilingTek_PlacementEmitter.TriCeilingTek_PlacementEmitter_C.ExecuteUbergraph_TriCeilingTek_PlacementEmitter");

	ATriCeilingTek_PlacementEmitter_C_ExecuteUbergraph_TriCeilingTek_PlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

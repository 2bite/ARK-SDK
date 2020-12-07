// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TriFoundationTek_PlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C.UserConstructionScript
// ()

void ATriFoundationTek_PlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C.UserConstructionScript");

	ATriFoundationTek_PlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C.ExecuteUbergraph_TriFoundationTek_PlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATriFoundationTek_PlacementEmitter_C::ExecuteUbergraph_TriFoundationTek_PlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C.ExecuteUbergraph_TriFoundationTek_PlacementEmitter");

	ATriFoundationTek_PlacementEmitter_C_ExecuteUbergraph_TriFoundationTek_PlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

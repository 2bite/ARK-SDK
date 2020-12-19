// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TriRoofTek_PlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TriRoofTek_PlacementEmitter.TriRoofTek_PlacementEmitter_C.UserConstructionScript
// ()

void ATriRoofTek_PlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TriRoofTek_PlacementEmitter.TriRoofTek_PlacementEmitter_C.UserConstructionScript");

	ATriRoofTek_PlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriRoofTek_PlacementEmitter.TriRoofTek_PlacementEmitter_C.ExecuteUbergraph_TriRoofTek_PlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATriRoofTek_PlacementEmitter_C::ExecuteUbergraph_TriRoofTek_PlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriRoofTek_PlacementEmitter.TriRoofTek_PlacementEmitter_C.ExecuteUbergraph_TriRoofTek_PlacementEmitter");

	ATriRoofTek_PlacementEmitter_C_ExecuteUbergraph_TriRoofTek_PlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

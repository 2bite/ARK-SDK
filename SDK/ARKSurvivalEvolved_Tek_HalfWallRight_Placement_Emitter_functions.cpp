// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tek_HalfWallRight_Placement_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tek_HalfWallRight_Placement_Emitter.Tek_HalfWallRight_Placement_Emitter_C.UserConstructionScript
// ()

void ATek_HalfWallRight_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_HalfWallRight_Placement_Emitter.Tek_HalfWallRight_Placement_Emitter_C.UserConstructionScript");

	ATek_HalfWallRight_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tek_HalfWallRight_Placement_Emitter.Tek_HalfWallRight_Placement_Emitter_C.ExecuteUbergraph_Tek_HalfWallRight_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATek_HalfWallRight_Placement_Emitter_C::ExecuteUbergraph_Tek_HalfWallRight_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_HalfWallRight_Placement_Emitter.Tek_HalfWallRight_Placement_Emitter_C.ExecuteUbergraph_Tek_HalfWallRight_Placement_Emitter");

	ATek_HalfWallRight_Placement_Emitter_C_ExecuteUbergraph_Tek_HalfWallRight_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

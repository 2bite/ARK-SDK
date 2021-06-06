// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScoutAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoutAnimBlueprint.ScoutAnimBlueprint_C.ExecuteUbergraph_ScoutAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UScoutAnimBlueprint_C::ExecuteUbergraph_ScoutAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutAnimBlueprint.ScoutAnimBlueprint_C.ExecuteUbergraph_ScoutAnimBlueprint");

	UScoutAnimBlueprint_C_ExecuteUbergraph_ScoutAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

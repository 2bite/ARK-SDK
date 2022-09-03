// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StagAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StagAnimBlueprint.StagAnimBlueprint_C.ExecuteUbergraph_StagAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStagAnimBlueprint_C::ExecuteUbergraph_StagAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StagAnimBlueprint.StagAnimBlueprint_C.ExecuteUbergraph_StagAnimBlueprint");

	UStagAnimBlueprint_C_ExecuteUbergraph_StagAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

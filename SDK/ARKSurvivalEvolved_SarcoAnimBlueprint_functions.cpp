// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SarcoAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SarcoAnimBlueprint.SarcoAnimBlueprint_C.ExecuteUbergraph_SarcoAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USarcoAnimBlueprint_C::ExecuteUbergraph_SarcoAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SarcoAnimBlueprint.SarcoAnimBlueprint_C.ExecuteUbergraph_SarcoAnimBlueprint");

	USarcoAnimBlueprint_C_ExecuteUbergraph_SarcoAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

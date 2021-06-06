// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OwlAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OwlAnimBlueprint.OwlAnimBlueprint_C.ExecuteUbergraph_OwlAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOwlAnimBlueprint_C::ExecuteUbergraph_OwlAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwlAnimBlueprint.OwlAnimBlueprint_C.ExecuteUbergraph_OwlAnimBlueprint");

	UOwlAnimBlueprint_C_ExecuteUbergraph_OwlAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

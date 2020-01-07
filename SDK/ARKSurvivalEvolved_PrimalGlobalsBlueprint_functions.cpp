// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalGlobalsBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C.ExecuteUbergraph_PrimalGlobalsBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalGlobalsBlueprint_C::ExecuteUbergraph_PrimalGlobalsBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C.ExecuteUbergraph_PrimalGlobalsBlueprint");

	UPrimalGlobalsBlueprint_C_ExecuteUbergraph_PrimalGlobalsBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

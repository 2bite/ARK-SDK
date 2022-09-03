// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Grinder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Grinder.PrimalItemStructure_Grinder_C.ExecuteUbergraph_PrimalItemStructure_Grinder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Grinder_C::ExecuteUbergraph_PrimalItemStructure_Grinder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Grinder.PrimalItemStructure_Grinder_C.ExecuteUbergraph_PrimalItemStructure_Grinder");

	UPrimalItemStructure_Grinder_C_ExecuteUbergraph_PrimalItemStructure_Grinder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

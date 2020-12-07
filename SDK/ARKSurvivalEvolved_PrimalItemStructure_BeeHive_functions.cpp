// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BeeHive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BeeHive.PrimalItemStructure_BeeHive_C.ExecuteUbergraph_PrimalItemStructure_BeeHive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BeeHive_C::ExecuteUbergraph_PrimalItemStructure_BeeHive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BeeHive.PrimalItemStructure_BeeHive_C.ExecuteUbergraph_PrimalItemStructure_BeeHive");

	UPrimalItemStructure_BeeHive_C_ExecuteUbergraph_PrimalItemStructure_BeeHive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Stocking_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Stocking.PrimalItemStructure_Stocking_C.ExecuteUbergraph_PrimalItemStructure_Stocking
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Stocking_C::ExecuteUbergraph_PrimalItemStructure_Stocking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Stocking.PrimalItemStructure_Stocking_C.ExecuteUbergraph_PrimalItemStructure_Stocking");

	UPrimalItemStructure_Stocking_C_ExecuteUbergraph_PrimalItemStructure_Stocking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

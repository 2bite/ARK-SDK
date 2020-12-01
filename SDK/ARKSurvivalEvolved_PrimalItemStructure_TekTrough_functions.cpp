// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekTrough_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekTrough.PrimalItemStructure_TekTrough_C.ExecuteUbergraph_PrimalItemStructure_TekTrough
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekTrough_C::ExecuteUbergraph_PrimalItemStructure_TekTrough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekTrough.PrimalItemStructure_TekTrough_C.ExecuteUbergraph_PrimalItemStructure_TekTrough");

	UPrimalItemStructure_TekTrough_C_ExecuteUbergraph_PrimalItemStructure_TekTrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

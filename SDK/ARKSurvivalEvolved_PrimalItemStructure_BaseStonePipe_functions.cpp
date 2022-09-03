// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseStonePipe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseStonePipe.PrimalItemStructure_BaseStonePipe_C.ExecuteUbergraph_PrimalItemStructure_BaseStonePipe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseStonePipe_C::ExecuteUbergraph_PrimalItemStructure_BaseStonePipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseStonePipe.PrimalItemStructure_BaseStonePipe_C.ExecuteUbergraph_PrimalItemStructure_BaseStonePipe");

	UPrimalItemStructure_BaseStonePipe_C_ExecuteUbergraph_PrimalItemStructure_BaseStonePipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

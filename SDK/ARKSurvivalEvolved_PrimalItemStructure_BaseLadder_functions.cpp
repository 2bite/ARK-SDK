// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseLadder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseLadder.PrimalItemStructure_BaseLadder_C.ExecuteUbergraph_PrimalItemStructure_BaseLadder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseLadder_C::ExecuteUbergraph_PrimalItemStructure_BaseLadder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseLadder.PrimalItemStructure_BaseLadder_C.ExecuteUbergraph_PrimalItemStructure_BaseLadder");

	UPrimalItemStructure_BaseLadder_C_ExecuteUbergraph_PrimalItemStructure_BaseLadder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

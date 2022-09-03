// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_RopeLadder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_RopeLadder.PrimalItemStructure_RopeLadder_C.ExecuteUbergraph_PrimalItemStructure_RopeLadder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_RopeLadder_C::ExecuteUbergraph_PrimalItemStructure_RopeLadder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_RopeLadder.PrimalItemStructure_RopeLadder_C.ExecuteUbergraph_PrimalItemStructure_RopeLadder");

	UPrimalItemStructure_RopeLadder_C_ExecuteUbergraph_PrimalItemStructure_RopeLadder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

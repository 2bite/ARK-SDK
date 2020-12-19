// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekLadder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekLadder.PrimalItemStructure_TekLadder_C.ExecuteUbergraph_PrimalItemStructure_TekLadder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekLadder_C::ExecuteUbergraph_PrimalItemStructure_TekLadder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekLadder.PrimalItemStructure_TekLadder_C.ExecuteUbergraph_PrimalItemStructure_TekLadder");

	UPrimalItemStructure_TekLadder_C_ExecuteUbergraph_PrimalItemStructure_TekLadder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

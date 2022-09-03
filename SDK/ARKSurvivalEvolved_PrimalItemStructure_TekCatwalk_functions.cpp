// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekCatwalk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekCatwalk.PrimalItemStructure_TekCatwalk_C.ExecuteUbergraph_PrimalItemStructure_TekCatwalk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekCatwalk_C::ExecuteUbergraph_PrimalItemStructure_TekCatwalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekCatwalk.PrimalItemStructure_TekCatwalk_C.ExecuteUbergraph_PrimalItemStructure_TekCatwalk");

	UPrimalItemStructure_TekCatwalk_C_ExecuteUbergraph_PrimalItemStructure_TekCatwalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

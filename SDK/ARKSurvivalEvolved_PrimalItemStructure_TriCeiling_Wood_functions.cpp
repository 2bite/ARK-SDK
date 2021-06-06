// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriCeiling_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TriCeiling_Wood.PrimalItemStructure_TriCeiling_Wood_C.ExecuteUbergraph_PrimalItemStructure_TriCeiling_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TriCeiling_Wood_C::ExecuteUbergraph_PrimalItemStructure_TriCeiling_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TriCeiling_Wood.PrimalItemStructure_TriCeiling_Wood_C.ExecuteUbergraph_PrimalItemStructure_TriCeiling_Wood");

	UPrimalItemStructure_TriCeiling_Wood_C_ExecuteUbergraph_PrimalItemStructure_TriCeiling_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

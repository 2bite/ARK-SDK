// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekRoof.PrimalItemStructure_TekRoof_C.ExecuteUbergraph_PrimalItemStructure_TekRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekRoof_C::ExecuteUbergraph_PrimalItemStructure_TekRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekRoof.PrimalItemStructure_TekRoof_C.ExecuteUbergraph_PrimalItemStructure_TekRoof");

	UPrimalItemStructure_TekRoof_C_ExecuteUbergraph_PrimalItemStructure_TekRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

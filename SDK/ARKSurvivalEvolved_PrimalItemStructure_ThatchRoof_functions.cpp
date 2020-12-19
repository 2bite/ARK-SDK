// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ThatchRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ThatchRoof.PrimalItemStructure_ThatchRoof_C.ExecuteUbergraph_PrimalItemStructure_ThatchRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ThatchRoof_C::ExecuteUbergraph_PrimalItemStructure_ThatchRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ThatchRoof.PrimalItemStructure_ThatchRoof_C.ExecuteUbergraph_PrimalItemStructure_ThatchRoof");

	UPrimalItemStructure_ThatchRoof_C_ExecuteUbergraph_PrimalItemStructure_ThatchRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BloodExtractor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BloodExtractor.PrimalItem_BloodExtractor_C.ExecuteUbergraph_PrimalItem_BloodExtractor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BloodExtractor_C::ExecuteUbergraph_PrimalItem_BloodExtractor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BloodExtractor.PrimalItem_BloodExtractor_C.ExecuteUbergraph_PrimalItem_BloodExtractor");

	UPrimalItem_BloodExtractor_C_ExecuteUbergraph_PrimalItem_BloodExtractor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

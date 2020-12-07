// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekRailing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekRailing.PrimalItemStructure_TekRailing_C.ExecuteUbergraph_PrimalItemStructure_TekRailing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekRailing_C::ExecuteUbergraph_PrimalItemStructure_TekRailing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekRailing.PrimalItemStructure_TekRailing_C.ExecuteUbergraph_PrimalItemStructure_TekRailing");

	UPrimalItemStructure_TekRailing_C_ExecuteUbergraph_PrimalItemStructure_TekRailing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

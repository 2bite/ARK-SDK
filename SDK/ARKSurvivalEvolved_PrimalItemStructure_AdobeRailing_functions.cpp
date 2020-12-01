// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeRailing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeRailing.PrimalItemStructure_AdobeRailing_C.ExecuteUbergraph_PrimalItemStructure_AdobeRailing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeRailing_C::ExecuteUbergraph_PrimalItemStructure_AdobeRailing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeRailing.PrimalItemStructure_AdobeRailing_C.ExecuteUbergraph_PrimalItemStructure_AdobeRailing");

	UPrimalItemStructure_AdobeRailing_C_ExecuteUbergraph_PrimalItemStructure_AdobeRailing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

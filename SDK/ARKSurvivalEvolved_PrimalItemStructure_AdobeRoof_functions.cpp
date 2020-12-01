// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeRoof.PrimalItemStructure_AdobeRoof_C.ExecuteUbergraph_PrimalItemStructure_AdobeRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeRoof_C::ExecuteUbergraph_PrimalItemStructure_AdobeRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeRoof.PrimalItemStructure_AdobeRoof_C.ExecuteUbergraph_PrimalItemStructure_AdobeRoof");

	UPrimalItemStructure_AdobeRoof_C_ExecuteUbergraph_PrimalItemStructure_AdobeRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeTrapdoor.PrimalItemStructure_AdobeTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeTrapdoor_C::ExecuteUbergraph_PrimalItemStructure_AdobeTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeTrapdoor.PrimalItemStructure_AdobeTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeTrapdoor");

	UPrimalItemStructure_AdobeTrapdoor_C_ExecuteUbergraph_PrimalItemStructure_AdobeTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

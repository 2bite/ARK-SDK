// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeWindow.PrimalItemStructure_AdobeWindow_C.ExecuteUbergraph_PrimalItemStructure_AdobeWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeWindow_C::ExecuteUbergraph_PrimalItemStructure_AdobeWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeWindow.PrimalItemStructure_AdobeWindow_C.ExecuteUbergraph_PrimalItemStructure_AdobeWindow");

	UPrimalItemStructure_AdobeWindow_C_ExecuteUbergraph_PrimalItemStructure_AdobeWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

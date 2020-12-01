// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekWindow.PrimalItemStructure_TekWindow_C.ExecuteUbergraph_PrimalItemStructure_TekWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekWindow_C::ExecuteUbergraph_PrimalItemStructure_TekWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekWindow.PrimalItemStructure_TekWindow_C.ExecuteUbergraph_PrimalItemStructure_TekWindow");

	UPrimalItemStructure_TekWindow_C_ExecuteUbergraph_PrimalItemStructure_TekWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

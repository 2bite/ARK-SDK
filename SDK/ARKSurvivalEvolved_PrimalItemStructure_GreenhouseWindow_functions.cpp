// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_GreenhouseWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_GreenhouseWindow.PrimalItemStructure_GreenhouseWindow_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_GreenhouseWindow_C::ExecuteUbergraph_PrimalItemStructure_GreenhouseWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_GreenhouseWindow.PrimalItemStructure_GreenhouseWindow_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseWindow");

	UPrimalItemStructure_GreenhouseWindow_C_ExecuteUbergraph_PrimalItemStructure_GreenhouseWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

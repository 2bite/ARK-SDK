// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseWindow.PrimalItemStructure_BaseWindow_C.ExecuteUbergraph_PrimalItemStructure_BaseWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseWindow_C::ExecuteUbergraph_PrimalItemStructure_BaseWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseWindow.PrimalItemStructure_BaseWindow_C.ExecuteUbergraph_PrimalItemStructure_BaseWindow");

	UPrimalItemStructure_BaseWindow_C_ExecuteUbergraph_PrimalItemStructure_BaseWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

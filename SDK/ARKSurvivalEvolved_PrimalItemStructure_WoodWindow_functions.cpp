// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodWindow.PrimalItemStructure_WoodWindow_C.ExecuteUbergraph_PrimalItemStructure_WoodWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodWindow_C::ExecuteUbergraph_PrimalItemStructure_WoodWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodWindow.PrimalItemStructure_WoodWindow_C.ExecuteUbergraph_PrimalItemStructure_WoodWindow");

	UPrimalItemStructure_WoodWindow_C_ExecuteUbergraph_PrimalItemStructure_WoodWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

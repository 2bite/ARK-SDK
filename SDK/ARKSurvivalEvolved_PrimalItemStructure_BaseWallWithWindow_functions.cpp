// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseWallWithWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseWallWithWindow.PrimalItemStructure_BaseWallWithWindow_C.ExecuteUbergraph_PrimalItemStructure_BaseWallWithWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseWallWithWindow_C::ExecuteUbergraph_PrimalItemStructure_BaseWallWithWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseWallWithWindow.PrimalItemStructure_BaseWallWithWindow_C.ExecuteUbergraph_PrimalItemStructure_BaseWallWithWindow");

	UPrimalItemStructure_BaseWallWithWindow_C_ExecuteUbergraph_PrimalItemStructure_BaseWallWithWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

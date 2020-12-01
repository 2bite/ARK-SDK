// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneWallWithWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneWallWithWindow.PrimalItemStructure_StoneWallWithWindow_C.ExecuteUbergraph_PrimalItemStructure_StoneWallWithWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneWallWithWindow_C::ExecuteUbergraph_PrimalItemStructure_StoneWallWithWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneWallWithWindow.PrimalItemStructure_StoneWallWithWindow_C.ExecuteUbergraph_PrimalItemStructure_StoneWallWithWindow");

	UPrimalItemStructure_StoneWallWithWindow_C_ExecuteUbergraph_PrimalItemStructure_StoneWallWithWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

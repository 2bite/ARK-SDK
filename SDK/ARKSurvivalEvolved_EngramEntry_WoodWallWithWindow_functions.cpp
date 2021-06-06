// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodWallWithWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodWallWithWindow.EngramEntry_WoodWallWithWindow_C.ExecuteUbergraph_EngramEntry_WoodWallWithWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodWallWithWindow_C::ExecuteUbergraph_EngramEntry_WoodWallWithWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodWallWithWindow.EngramEntry_WoodWallWithWindow_C.ExecuteUbergraph_EngramEntry_WoodWallWithWindow");

	UEngramEntry_WoodWallWithWindow_C_ExecuteUbergraph_EngramEntry_WoodWallWithWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

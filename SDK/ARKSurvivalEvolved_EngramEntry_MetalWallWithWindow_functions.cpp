// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalWallWithWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalWallWithWindow.EngramEntry_MetalWallWithWindow_C.ExecuteUbergraph_EngramEntry_MetalWallWithWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalWallWithWindow_C::ExecuteUbergraph_EngramEntry_MetalWallWithWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalWallWithWindow.EngramEntry_MetalWallWithWindow_C.ExecuteUbergraph_EngramEntry_MetalWallWithWindow");

	UEngramEntry_MetalWallWithWindow_C_ExecuteUbergraph_EngramEntry_MetalWallWithWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

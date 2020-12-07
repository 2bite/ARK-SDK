// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeWallWithWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeWallWithWindow.EngramEntry_AdobeWallWithWindow_C.ExecuteUbergraph_EngramEntry_AdobeWallWithWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeWallWithWindow_C::ExecuteUbergraph_EngramEntry_AdobeWallWithWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeWallWithWindow.EngramEntry_AdobeWallWithWindow_C.ExecuteUbergraph_EngramEntry_AdobeWallWithWindow");

	UEngramEntry_AdobeWallWithWindow_C_ExecuteUbergraph_EngramEntry_AdobeWallWithWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

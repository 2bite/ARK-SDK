// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekWallWithWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekWallWithWindow.EngramEntry_TekWallWithWindow_C.ExecuteUbergraph_EngramEntry_TekWallWithWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekWallWithWindow_C::ExecuteUbergraph_EngramEntry_TekWallWithWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekWallWithWindow.EngramEntry_TekWallWithWindow_C.ExecuteUbergraph_EngramEntry_TekWallWithWindow");

	UEngramEntry_TekWallWithWindow_C_ExecuteUbergraph_EngramEntry_TekWallWithWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneWallWithWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneWallWithWindow.EngramEntry_StoneWallWithWindow_C.ExecuteUbergraph_EngramEntry_StoneWallWithWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneWallWithWindow_C::ExecuteUbergraph_EngramEntry_StoneWallWithWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneWallWithWindow.EngramEntry_StoneWallWithWindow_C.ExecuteUbergraph_EngramEntry_StoneWallWithWindow");

	UEngramEntry_StoneWallWithWindow_C_ExecuteUbergraph_EngramEntry_StoneWallWithWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

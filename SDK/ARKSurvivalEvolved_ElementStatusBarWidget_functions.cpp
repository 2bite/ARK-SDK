// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementStatusBarWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementStatusBarWidget.ElementStatusBarWidget_C.UpdateBoostIconVisibility
// ()

void UElementStatusBarWidget_C::UpdateBoostIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementStatusBarWidget.ElementStatusBarWidget_C.UpdateBoostIconVisibility");

	UElementStatusBarWidget_C_UpdateBoostIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementStatusBarWidget.ElementStatusBarWidget_C.ExecuteUbergraph_ElementStatusBarWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UElementStatusBarWidget_C::ExecuteUbergraph_ElementStatusBarWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementStatusBarWidget.ElementStatusBarWidget_C.ExecuteUbergraph_ElementStatusBarWidget");

	UElementStatusBarWidget_C_ExecuteUbergraph_ElementStatusBarWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

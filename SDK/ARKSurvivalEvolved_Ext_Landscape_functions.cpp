// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Landscape_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ext_Landscape.Ext_Landscape_C.HideLandscape
// ()

void AExt_Landscape_C::HideLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_Landscape.Ext_Landscape_C.HideLandscape");

	AExt_Landscape_C_HideLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ext_Landscape.Ext_Landscape_C.UnHideLandscape
// ()

void AExt_Landscape_C::UnHideLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_Landscape.Ext_Landscape_C.UnHideLandscape");

	AExt_Landscape_C_UnHideLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ext_Landscape.Ext_Landscape_C.ExecuteUbergraph_Ext_Landscape
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExt_Landscape_C::ExecuteUbergraph_Ext_Landscape(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_Landscape.Ext_Landscape_C.ExecuteUbergraph_Ext_Landscape");

	AExt_Landscape_C_ExecuteUbergraph_Ext_Landscape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

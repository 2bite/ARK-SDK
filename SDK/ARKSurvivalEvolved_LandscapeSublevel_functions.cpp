// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LandscapeSublevel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LandscapeSublevel.LandscapeSublevel_C.HideLandscape
// ()

void ALandscapeSublevel_C::HideLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeSublevel.LandscapeSublevel_C.HideLandscape");

	ALandscapeSublevel_C_HideLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeSublevel.LandscapeSublevel_C.ShowLandscape
// ()

void ALandscapeSublevel_C::ShowLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeSublevel.LandscapeSublevel_C.ShowLandscape");

	ALandscapeSublevel_C_ShowLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandscapeSublevel.LandscapeSublevel_C.ExecuteUbergraph_LandscapeSublevel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeSublevel_C::ExecuteUbergraph_LandscapeSublevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandscapeSublevel.LandscapeSublevel_C.ExecuteUbergraph_LandscapeSublevel");

	ALandscapeSublevel_C_ExecuteUbergraph_LandscapeSublevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

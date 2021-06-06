// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBola_XmasLights_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBola_XmasLights.ProjBola_XmasLights_C.UserConstructionScript
// ()

void AProjBola_XmasLights_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBola_XmasLights.ProjBola_XmasLights_C.UserConstructionScript");

	AProjBola_XmasLights_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBola_XmasLights.ProjBola_XmasLights_C.ExecuteUbergraph_ProjBola_XmasLights
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBola_XmasLights_C::ExecuteUbergraph_ProjBola_XmasLights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBola_XmasLights.ProjBola_XmasLights_C.ExecuteUbergraph_ProjBola_XmasLights");

	AProjBola_XmasLights_C_ExecuteUbergraph_ProjBola_XmasLights_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMudTrail_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMudTrail.ProjMudTrail_C.UserConstructionScript
// ()

void AProjMudTrail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMudTrail.ProjMudTrail_C.UserConstructionScript");

	AProjMudTrail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMudTrail.ProjMudTrail_C.ExecuteUbergraph_ProjMudTrail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjMudTrail_C::ExecuteUbergraph_ProjMudTrail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMudTrail.ProjMudTrail_C.ExecuteUbergraph_ProjMudTrail");

	AProjMudTrail_C_ExecuteUbergraph_ProjMudTrail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

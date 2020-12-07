// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjEndDrone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjEndDrone.ProjEndDrone_C.UserConstructionScript
// ()

void AProjEndDrone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjEndDrone.ProjEndDrone_C.UserConstructionScript");

	AProjEndDrone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjEndDrone.ProjEndDrone_C.ExecuteUbergraph_ProjEndDrone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjEndDrone_C::ExecuteUbergraph_ProjEndDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjEndDrone.ProjEndDrone_C.ExecuteUbergraph_ProjEndDrone");

	AProjEndDrone_C_ExecuteUbergraph_ProjEndDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

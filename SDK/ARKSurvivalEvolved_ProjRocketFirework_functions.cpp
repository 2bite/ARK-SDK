// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRocketFirework_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjRocketFirework.ProjRocketFirework_C.UserConstructionScript
// ()

void AProjRocketFirework_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketFirework.ProjRocketFirework_C.UserConstructionScript");

	AProjRocketFirework_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocketFirework.ProjRocketFirework_C.ExecuteUbergraph_ProjRocketFirework
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRocketFirework_C::ExecuteUbergraph_ProjRocketFirework(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketFirework.ProjRocketFirework_C.ExecuteUbergraph_ProjRocketFirework");

	AProjRocketFirework_C_ExecuteUbergraph_ProjRocketFirework_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

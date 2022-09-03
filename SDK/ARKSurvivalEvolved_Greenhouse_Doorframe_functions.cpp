// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Doorframe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Greenhouse_Doorframe.Greenhouse_Doorframe_C.UserConstructionScript
// ()

void AGreenhouse_Doorframe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Doorframe.Greenhouse_Doorframe_C.UserConstructionScript");

	AGreenhouse_Doorframe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Greenhouse_Doorframe.Greenhouse_Doorframe_C.ExecuteUbergraph_Greenhouse_Doorframe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGreenhouse_Doorframe_C::ExecuteUbergraph_Greenhouse_Doorframe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Doorframe.Greenhouse_Doorframe_C.ExecuteUbergraph_Greenhouse_Doorframe");

	AGreenhouse_Doorframe_C_ExecuteUbergraph_Greenhouse_Doorframe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

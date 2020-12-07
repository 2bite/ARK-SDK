// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Ceiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Greenhouse_Ceiling.Greenhouse_Ceiling_C.UserConstructionScript
// ()

void AGreenhouse_Ceiling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Ceiling.Greenhouse_Ceiling_C.UserConstructionScript");

	AGreenhouse_Ceiling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Greenhouse_Ceiling.Greenhouse_Ceiling_C.ExecuteUbergraph_Greenhouse_Ceiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGreenhouse_Ceiling_C::ExecuteUbergraph_Greenhouse_Ceiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Ceiling.Greenhouse_Ceiling_C.ExecuteUbergraph_Greenhouse_Ceiling");

	AGreenhouse_Ceiling_C_ExecuteUbergraph_Greenhouse_Ceiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

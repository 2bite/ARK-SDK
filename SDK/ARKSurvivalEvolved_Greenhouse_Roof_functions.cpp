// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Roof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Greenhouse_Roof.Greenhouse_Roof_C.UserConstructionScript
// ()

void AGreenhouse_Roof_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Roof.Greenhouse_Roof_C.UserConstructionScript");

	AGreenhouse_Roof_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Greenhouse_Roof.Greenhouse_Roof_C.ExecuteUbergraph_Greenhouse_Roof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGreenhouse_Roof_C::ExecuteUbergraph_Greenhouse_Roof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Roof.Greenhouse_Roof_C.ExecuteUbergraph_Greenhouse_Roof");

	AGreenhouse_Roof_C_ExecuteUbergraph_Greenhouse_Roof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

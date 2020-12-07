// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTap_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterTap_Metal.WaterTap_Metal_C.UserConstructionScript
// ()

void AWaterTap_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTap_Metal.WaterTap_Metal_C.UserConstructionScript");

	AWaterTap_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterTap_Metal.WaterTap_Metal_C.ExecuteUbergraph_WaterTap_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterTap_Metal_C::ExecuteUbergraph_WaterTap_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTap_Metal.WaterTap_Metal_C.ExecuteUbergraph_WaterTap_Metal");

	AWaterTap_Metal_C_ExecuteUbergraph_WaterTap_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

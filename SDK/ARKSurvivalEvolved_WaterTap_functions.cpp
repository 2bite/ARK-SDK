// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterTap.WaterTap_C.UserConstructionScript
// ()

void AWaterTap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTap.WaterTap_C.UserConstructionScript");

	AWaterTap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterTap.WaterTap_C.ExecuteUbergraph_WaterTap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterTap_C::ExecuteUbergraph_WaterTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTap.WaterTap_C.ExecuteUbergraph_WaterTap");

	AWaterTap_C_ExecuteUbergraph_WaterTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

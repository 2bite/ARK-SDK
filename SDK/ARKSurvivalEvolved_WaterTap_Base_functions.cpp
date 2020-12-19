// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTap_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterTap_Base.WaterTap_Base_C.UserConstructionScript
// ()

void AWaterTap_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTap_Base.WaterTap_Base_C.UserConstructionScript");

	AWaterTap_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterTap_Base.WaterTap_Base_C.ExecuteUbergraph_WaterTap_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterTap_Base_C::ExecuteUbergraph_WaterTap_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTap_Base.WaterTap_Base_C.ExecuteUbergraph_WaterTap_Base");

	AWaterTap_Base_C_ExecuteUbergraph_WaterTap_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

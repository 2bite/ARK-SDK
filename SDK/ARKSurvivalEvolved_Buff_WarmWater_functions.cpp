// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WarmWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_WarmWater.Buff_WarmWater_C.UserConstructionScript
// ()

void ABuff_WarmWater_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WarmWater.Buff_WarmWater_C.UserConstructionScript");

	ABuff_WarmWater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WarmWater.Buff_WarmWater_C.ExecuteUbergraph_Buff_WarmWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WarmWater_C::ExecuteUbergraph_Buff_WarmWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WarmWater.Buff_WarmWater_C.ExecuteUbergraph_Buff_WarmWater");

	ABuff_WarmWater_C_ExecuteUbergraph_Buff_WarmWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

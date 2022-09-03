// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WarmWater_Single_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_WarmWater_Single.Buff_WarmWater_Single_C.UserConstructionScript
// ()

void ABuff_WarmWater_Single_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WarmWater_Single.Buff_WarmWater_Single_C.UserConstructionScript");

	ABuff_WarmWater_Single_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WarmWater_Single.Buff_WarmWater_Single_C.ExecuteUbergraph_Buff_WarmWater_Single
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WarmWater_Single_C::ExecuteUbergraph_Buff_WarmWater_Single(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WarmWater_Single.Buff_WarmWater_Single_C.ExecuteUbergraph_Buff_WarmWater_Single");

	ABuff_WarmWater_Single_C_ExecuteUbergraph_Buff_WarmWater_Single_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

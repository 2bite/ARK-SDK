// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CoolWater_Single_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CoolWater_Single.Buff_CoolWater_Single_C.UserConstructionScript
// ()

void ABuff_CoolWater_Single_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CoolWater_Single.Buff_CoolWater_Single_C.UserConstructionScript");

	ABuff_CoolWater_Single_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CoolWater_Single.Buff_CoolWater_Single_C.ExecuteUbergraph_Buff_CoolWater_Single
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CoolWater_Single_C::ExecuteUbergraph_Buff_CoolWater_Single(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CoolWater_Single.Buff_CoolWater_Single_C.ExecuteUbergraph_Buff_CoolWater_Single");

	ABuff_CoolWater_Single_C_ExecuteUbergraph_Buff_CoolWater_Single_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

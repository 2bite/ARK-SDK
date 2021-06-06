// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_LargeCannon_STA_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_LargeCannon_STA.Buff_TekStrider_LargeCannon_STA_C.UserConstructionScript
// ()

void ABuff_TekStrider_LargeCannon_STA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon_STA.Buff_TekStrider_LargeCannon_STA_C.UserConstructionScript");

	ABuff_TekStrider_LargeCannon_STA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon_STA.Buff_TekStrider_LargeCannon_STA_C.ExecuteUbergraph_Buff_TekStrider_LargeCannon_STA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_STA_C::ExecuteUbergraph_Buff_TekStrider_LargeCannon_STA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon_STA.Buff_TekStrider_LargeCannon_STA_C.ExecuteUbergraph_Buff_TekStrider_LargeCannon_STA");

	ABuff_TekStrider_LargeCannon_STA_C_ExecuteUbergraph_Buff_TekStrider_LargeCannon_STA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

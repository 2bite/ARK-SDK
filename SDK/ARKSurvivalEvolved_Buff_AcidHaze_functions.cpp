// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AcidHaze_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AcidHaze.Buff_AcidHaze_C.UserConstructionScript
// ()

void ABuff_AcidHaze_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AcidHaze.Buff_AcidHaze_C.UserConstructionScript");

	ABuff_AcidHaze_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AcidHaze.Buff_AcidHaze_C.ExecuteUbergraph_Buff_AcidHaze
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AcidHaze_C::ExecuteUbergraph_Buff_AcidHaze(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AcidHaze.Buff_AcidHaze_C.ExecuteUbergraph_Buff_AcidHaze");

	ABuff_AcidHaze_C_ExecuteUbergraph_Buff_AcidHaze_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

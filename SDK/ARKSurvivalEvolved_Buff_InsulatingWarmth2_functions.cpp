// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InsulatingWarmth2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_InsulatingWarmth2.Buff_InsulatingWarmth2_C.UserConstructionScript
// ()

void ABuff_InsulatingWarmth2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsulatingWarmth2.Buff_InsulatingWarmth2_C.UserConstructionScript");

	ABuff_InsulatingWarmth2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_InsulatingWarmth2.Buff_InsulatingWarmth2_C.ExecuteUbergraph_Buff_InsulatingWarmth2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_InsulatingWarmth2_C::ExecuteUbergraph_Buff_InsulatingWarmth2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsulatingWarmth2.Buff_InsulatingWarmth2_C.ExecuteUbergraph_Buff_InsulatingWarmth2");

	ABuff_InsulatingWarmth2_C_ExecuteUbergraph_Buff_InsulatingWarmth2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CrateBoosting_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CrateBoosting_Base.Buff_CrateBoosting_Base_C.UserConstructionScript
// ()

void ABuff_CrateBoosting_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CrateBoosting_Base.Buff_CrateBoosting_Base_C.UserConstructionScript");

	ABuff_CrateBoosting_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CrateBoosting_Base.Buff_CrateBoosting_Base_C.ExecuteUbergraph_Buff_CrateBoosting_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CrateBoosting_Base_C::ExecuteUbergraph_Buff_CrateBoosting_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CrateBoosting_Base.Buff_CrateBoosting_Base_C.ExecuteUbergraph_Buff_CrateBoosting_Base");

	ABuff_CrateBoosting_Base_C_ExecuteUbergraph_Buff_CrateBoosting_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

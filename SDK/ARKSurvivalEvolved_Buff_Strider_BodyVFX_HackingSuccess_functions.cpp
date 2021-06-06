// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Strider_BodyVFX_HackingSuccess_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C.UserConstructionScript
// ()

void ABuff_Strider_BodyVFX_HackingSuccess_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C.UserConstructionScript");

	ABuff_Strider_BodyVFX_HackingSuccess_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C.ExecuteUbergraph_Buff_Strider_BodyVFX_HackingSuccess
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Strider_BodyVFX_HackingSuccess_C::ExecuteUbergraph_Buff_Strider_BodyVFX_HackingSuccess(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_HackingSuccess.Buff_Strider_BodyVFX_HackingSuccess_C.ExecuteUbergraph_Buff_Strider_BodyVFX_HackingSuccess");

	ABuff_Strider_BodyVFX_HackingSuccess_C_ExecuteUbergraph_Buff_Strider_BodyVFX_HackingSuccess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Strider_BodyVFX_Transmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Strider_BodyVFX_Transmitter.Buff_Strider_BodyVFX_Transmitter_C.UserConstructionScript
// ()

void ABuff_Strider_BodyVFX_Transmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Transmitter.Buff_Strider_BodyVFX_Transmitter_C.UserConstructionScript");

	ABuff_Strider_BodyVFX_Transmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Strider_BodyVFX_Transmitter.Buff_Strider_BodyVFX_Transmitter_C.ExecuteUbergraph_Buff_Strider_BodyVFX_Transmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Strider_BodyVFX_Transmitter_C::ExecuteUbergraph_Buff_Strider_BodyVFX_Transmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Transmitter.Buff_Strider_BodyVFX_Transmitter_C.ExecuteUbergraph_Buff_Strider_BodyVFX_Transmitter");

	ABuff_Strider_BodyVFX_Transmitter_C_ExecuteUbergraph_Buff_Strider_BodyVFX_Transmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

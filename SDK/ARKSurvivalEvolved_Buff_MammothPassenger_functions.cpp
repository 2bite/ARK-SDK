// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MammothPassenger_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MammothPassenger.Buff_MammothPassenger_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ABuff_MammothPassenger_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothPassenger.Buff_MammothPassenger_C.BPForceCameraStyle");

	ABuff_MammothPassenger_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MammothPassenger.Buff_MammothPassenger_C.UserConstructionScript
// ()

void ABuff_MammothPassenger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothPassenger.Buff_MammothPassenger_C.UserConstructionScript");

	ABuff_MammothPassenger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothPassenger.Buff_MammothPassenger_C.ExecuteUbergraph_Buff_MammothPassenger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothPassenger_C::ExecuteUbergraph_Buff_MammothPassenger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothPassenger.Buff_MammothPassenger_C.ExecuteUbergraph_Buff_MammothPassenger");

	ABuff_MammothPassenger_C_ExecuteUbergraph_Buff_MammothPassenger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

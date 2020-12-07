// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AlarmTrapEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AlarmTrapEmitter.AlarmTrapEmitter_C.UserConstructionScript
// ()

void AAlarmTrapEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlarmTrapEmitter.AlarmTrapEmitter_C.UserConstructionScript");

	AAlarmTrapEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlarmTrapEmitter.AlarmTrapEmitter_C.ExecuteUbergraph_AlarmTrapEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAlarmTrapEmitter_C::ExecuteUbergraph_AlarmTrapEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlarmTrapEmitter.AlarmTrapEmitter_C.ExecuteUbergraph_AlarmTrapEmitter");

	AAlarmTrapEmitter_C_ExecuteUbergraph_AlarmTrapEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

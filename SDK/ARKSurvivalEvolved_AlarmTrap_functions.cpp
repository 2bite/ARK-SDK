// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AlarmTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AlarmTrap.AlarmTrap_C.UserConstructionScript
// ()

void AAlarmTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlarmTrap.AlarmTrap_C.UserConstructionScript");

	AAlarmTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlarmTrap.AlarmTrap_C.ExecuteUbergraph_AlarmTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAlarmTrap_C::ExecuteUbergraph_AlarmTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlarmTrap.AlarmTrap_C.ExecuteUbergraph_AlarmTrap");

	AAlarmTrap_C_ExecuteUbergraph_AlarmTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

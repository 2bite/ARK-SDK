// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapAlarmTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapAlarmTrap.WeapAlarmTrap_C.UserConstructionScript
// ()

void AWeapAlarmTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAlarmTrap.WeapAlarmTrap_C.UserConstructionScript");

	AWeapAlarmTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAlarmTrap.WeapAlarmTrap_C.ExecuteUbergraph_WeapAlarmTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAlarmTrap_C::ExecuteUbergraph_WeapAlarmTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAlarmTrap.WeapAlarmTrap_C.ExecuteUbergraph_WeapAlarmTrap");

	AWeapAlarmTrap_C_ExecuteUbergraph_WeapAlarmTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

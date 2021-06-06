// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TurretWarningShort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TurretWarningShort.TurretWarningShort_C.UserConstructionScript
// ()

void ATurretWarningShort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurretWarningShort.TurretWarningShort_C.UserConstructionScript");

	ATurretWarningShort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TurretWarningShort.TurretWarningShort_C.ExecuteUbergraph_TurretWarningShort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATurretWarningShort_C::ExecuteUbergraph_TurretWarningShort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TurretWarningShort.TurretWarningShort_C.ExecuteUbergraph_TurretWarningShort");

	ATurretWarningShort_C_ExecuteUbergraph_TurretWarningShort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

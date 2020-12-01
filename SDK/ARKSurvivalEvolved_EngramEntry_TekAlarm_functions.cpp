// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekAlarm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekAlarm.EngramEntry_TekAlarm_C.ExecuteUbergraph_EngramEntry_TekAlarm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekAlarm_C::ExecuteUbergraph_EngramEntry_TekAlarm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekAlarm.EngramEntry_TekAlarm_C.ExecuteUbergraph_EngramEntry_TekAlarm");

	UEngramEntry_TekAlarm_C_ExecuteUbergraph_EngramEntry_TekAlarm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

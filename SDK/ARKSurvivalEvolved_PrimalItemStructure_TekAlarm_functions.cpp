// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekAlarm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekAlarm.PrimalItemStructure_TekAlarm_C.ExecuteUbergraph_PrimalItemStructure_TekAlarm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekAlarm_C::ExecuteUbergraph_PrimalItemStructure_TekAlarm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekAlarm.PrimalItemStructure_TekAlarm_C.ExecuteUbergraph_PrimalItemStructure_TekAlarm");

	UPrimalItemStructure_TekAlarm_C_ExecuteUbergraph_PrimalItemStructure_TekAlarm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

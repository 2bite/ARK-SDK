// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_SleepingBag_Hide_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_SleepingBag_Hide.PrimalItemStructure_SleepingBag_Hide_C.ExecuteUbergraph_PrimalItemStructure_SleepingBag_Hide
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_SleepingBag_Hide_C::ExecuteUbergraph_PrimalItemStructure_SleepingBag_Hide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SleepingBag_Hide.PrimalItemStructure_SleepingBag_Hide_C.ExecuteUbergraph_PrimalItemStructure_SleepingBag_Hide");

	UPrimalItemStructure_SleepingBag_Hide_C_ExecuteUbergraph_PrimalItemStructure_SleepingBag_Hide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

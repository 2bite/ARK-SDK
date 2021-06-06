// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableEatable_BuffingSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumableEatable_BuffingSoup.PrimalItemConsumableEatable_BuffingSoup_C.ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableEatable_BuffingSoup_C::ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_BuffingSoup.PrimalItemConsumableEatable_BuffingSoup_C.ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup");

	UPrimalItemConsumableEatable_BuffingSoup_C_ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

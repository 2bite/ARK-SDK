// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableEatable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumableEatable.PrimalItemConsumableEatable_C.ExecuteUbergraph_PrimalItemConsumableEatable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableEatable_C::ExecuteUbergraph_PrimalItemConsumableEatable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable.PrimalItemConsumableEatable_C.ExecuteUbergraph_PrimalItemConsumableEatable");

	UPrimalItemConsumableEatable_C_ExecuteUbergraph_PrimalItemConsumableEatable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

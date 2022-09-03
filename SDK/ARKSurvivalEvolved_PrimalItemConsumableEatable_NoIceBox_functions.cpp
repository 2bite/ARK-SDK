// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableEatable_NoIceBox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumableEatable_NoIceBox.PrimalItemConsumableEatable_NoIceBox_C.ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableEatable_NoIceBox_C::ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_NoIceBox.PrimalItemConsumableEatable_NoIceBox_C.ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox");

	UPrimalItemConsumableEatable_NoIceBox_C_ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

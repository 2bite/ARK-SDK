// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SpindlesSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SpindlesSaddle.PrimalItemArmor_SpindlesSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpindlesSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SpindlesSaddle_C::ExecuteUbergraph_PrimalItemArmor_SpindlesSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SpindlesSaddle.PrimalItemArmor_SpindlesSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpindlesSaddle");

	UPrimalItemArmor_SpindlesSaddle_C_ExecuteUbergraph_PrimalItemArmor_SpindlesSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

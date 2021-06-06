// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MothSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MothSaddle.PrimalItemArmor_MothSaddle_C.ExecuteUbergraph_PrimalItemArmor_MothSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MothSaddle_C::ExecuteUbergraph_PrimalItemArmor_MothSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MothSaddle.PrimalItemArmor_MothSaddle_C.ExecuteUbergraph_PrimalItemArmor_MothSaddle");

	UPrimalItemArmor_MothSaddle_C_ExecuteUbergraph_PrimalItemArmor_MothSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

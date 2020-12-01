// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DireBearSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DireBearSaddle.PrimalItemArmor_DireBearSaddle_C.ExecuteUbergraph_PrimalItemArmor_DireBearSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DireBearSaddle_C::ExecuteUbergraph_PrimalItemArmor_DireBearSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DireBearSaddle.PrimalItemArmor_DireBearSaddle_C.ExecuteUbergraph_PrimalItemArmor_DireBearSaddle");

	UPrimalItemArmor_DireBearSaddle_C_ExecuteUbergraph_PrimalItemArmor_DireBearSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

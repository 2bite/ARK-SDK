// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MosaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MosaSaddle.PrimalItemArmor_MosaSaddle_C.ExecuteUbergraph_PrimalItemArmor_MosaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MosaSaddle_C::ExecuteUbergraph_PrimalItemArmor_MosaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MosaSaddle.PrimalItemArmor_MosaSaddle_C.ExecuteUbergraph_PrimalItemArmor_MosaSaddle");

	UPrimalItemArmor_MosaSaddle_C_ExecuteUbergraph_PrimalItemArmor_MosaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

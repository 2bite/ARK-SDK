// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MekTransformer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MekTransformer.PrimalItemArmor_MekTransformer_C.ExecuteUbergraph_PrimalItemArmor_MekTransformer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MekTransformer_C::ExecuteUbergraph_PrimalItemArmor_MekTransformer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MekTransformer.PrimalItemArmor_MekTransformer_C.ExecuteUbergraph_PrimalItemArmor_MekTransformer");

	UPrimalItemArmor_MekTransformer_C_ExecuteUbergraph_PrimalItemArmor_MekTransformer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

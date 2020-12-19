// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ClothGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ClothGloves.PrimalItemArmor_ClothGloves_C.ExecuteUbergraph_PrimalItemArmor_ClothGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ClothGloves_C::ExecuteUbergraph_PrimalItemArmor_ClothGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ClothGloves.PrimalItemArmor_ClothGloves_C.ExecuteUbergraph_PrimalItemArmor_ClothGloves");

	UPrimalItemArmor_ClothGloves_C_ExecuteUbergraph_PrimalItemArmor_ClothGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

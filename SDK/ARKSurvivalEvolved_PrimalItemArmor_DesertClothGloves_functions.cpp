// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DesertClothGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DesertClothGloves.PrimalItemArmor_DesertClothGloves_C.ExecuteUbergraph_PrimalItemArmor_DesertClothGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DesertClothGloves_C::ExecuteUbergraph_PrimalItemArmor_DesertClothGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesertClothGloves.PrimalItemArmor_DesertClothGloves_C.ExecuteUbergraph_PrimalItemArmor_DesertClothGloves");

	UPrimalItemArmor_DesertClothGloves_C_ExecuteUbergraph_PrimalItemArmor_DesertClothGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

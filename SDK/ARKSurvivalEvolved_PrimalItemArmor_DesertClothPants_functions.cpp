// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DesertClothPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DesertClothPants.PrimalItemArmor_DesertClothPants_C.ExecuteUbergraph_PrimalItemArmor_DesertClothPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DesertClothPants_C::ExecuteUbergraph_PrimalItemArmor_DesertClothPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesertClothPants.PrimalItemArmor_DesertClothPants_C.ExecuteUbergraph_PrimalItemArmor_DesertClothPants");

	UPrimalItemArmor_DesertClothPants_C_ExecuteUbergraph_PrimalItemArmor_DesertClothPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

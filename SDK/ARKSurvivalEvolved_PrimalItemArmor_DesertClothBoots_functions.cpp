// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DesertClothBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DesertClothBoots.PrimalItemArmor_DesertClothBoots_C.ExecuteUbergraph_PrimalItemArmor_DesertClothBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DesertClothBoots_C::ExecuteUbergraph_PrimalItemArmor_DesertClothBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesertClothBoots.PrimalItemArmor_DesertClothBoots_C.ExecuteUbergraph_PrimalItemArmor_DesertClothBoots");

	UPrimalItemArmor_DesertClothBoots_C_ExecuteUbergraph_PrimalItemArmor_DesertClothBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DesertClothShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DesertClothShirt.PrimalItemArmor_DesertClothShirt_C.ExecuteUbergraph_PrimalItemArmor_DesertClothShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DesertClothShirt_C::ExecuteUbergraph_PrimalItemArmor_DesertClothShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesertClothShirt.PrimalItemArmor_DesertClothShirt_C.ExecuteUbergraph_PrimalItemArmor_DesertClothShirt");

	UPrimalItemArmor_DesertClothShirt_C_ExecuteUbergraph_PrimalItemArmor_DesertClothShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BaseShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BaseShirt.PrimalItemArmor_BaseShirt_C.ExecuteUbergraph_PrimalItemArmor_BaseShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BaseShirt_C::ExecuteUbergraph_PrimalItemArmor_BaseShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BaseShirt.PrimalItemArmor_BaseShirt_C.ExecuteUbergraph_PrimalItemArmor_BaseShirt");

	UPrimalItemArmor_BaseShirt_C_ExecuteUbergraph_PrimalItemArmor_BaseShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

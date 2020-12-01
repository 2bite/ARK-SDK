// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ChitinShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ChitinShirt.PrimalItemArmor_ChitinShirt_C.ExecuteUbergraph_PrimalItemArmor_ChitinShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ChitinShirt_C::ExecuteUbergraph_PrimalItemArmor_ChitinShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ChitinShirt.PrimalItemArmor_ChitinShirt_C.ExecuteUbergraph_PrimalItemArmor_ChitinShirt");

	UPrimalItemArmor_ChitinShirt_C_ExecuteUbergraph_PrimalItemArmor_ChitinShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

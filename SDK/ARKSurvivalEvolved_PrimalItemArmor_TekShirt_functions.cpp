// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekShirt.PrimalItemArmor_TekShirt_C.ExecuteUbergraph_PrimalItemArmor_TekShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekShirt_C::ExecuteUbergraph_PrimalItemArmor_TekShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt.PrimalItemArmor_TekShirt_C.ExecuteUbergraph_PrimalItemArmor_TekShirt");

	UPrimalItemArmor_TekShirt_C_ExecuteUbergraph_PrimalItemArmor_TekShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

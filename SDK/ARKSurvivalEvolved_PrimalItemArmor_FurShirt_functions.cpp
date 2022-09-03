// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_FurShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_FurShirt.PrimalItemArmor_FurShirt_C.ExecuteUbergraph_PrimalItemArmor_FurShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_FurShirt_C::ExecuteUbergraph_PrimalItemArmor_FurShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_FurShirt.PrimalItemArmor_FurShirt_C.ExecuteUbergraph_PrimalItemArmor_FurShirt");

	UPrimalItemArmor_FurShirt_C_ExecuteUbergraph_PrimalItemArmor_FurShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

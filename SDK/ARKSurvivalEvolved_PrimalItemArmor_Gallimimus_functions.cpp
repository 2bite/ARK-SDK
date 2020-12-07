// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Gallimimus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_Gallimimus.PrimalItemArmor_Gallimimus_C.ExecuteUbergraph_PrimalItemArmor_Gallimimus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Gallimimus_C::ExecuteUbergraph_PrimalItemArmor_Gallimimus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Gallimimus.PrimalItemArmor_Gallimimus_C.ExecuteUbergraph_PrimalItemArmor_Gallimimus");

	UPrimalItemArmor_Gallimimus_C_ExecuteUbergraph_PrimalItemArmor_Gallimimus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

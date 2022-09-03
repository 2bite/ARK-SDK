// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MekBackpack_Shield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MekBackpack_Shield.PrimalItemArmor_MekBackpack_Shield_C.ExecuteUbergraph_PrimalItemArmor_MekBackpack_Shield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MekBackpack_Shield_C::ExecuteUbergraph_PrimalItemArmor_MekBackpack_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MekBackpack_Shield.PrimalItemArmor_MekBackpack_Shield_C.ExecuteUbergraph_PrimalItemArmor_MekBackpack_Shield");

	UPrimalItemArmor_MekBackpack_Shield_C_ExecuteUbergraph_PrimalItemArmor_MekBackpack_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

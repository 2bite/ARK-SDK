// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MekBackpack_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MekBackpack_Base.PrimalItemArmor_MekBackpack_Base_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_MekBackpack_Base_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MekBackpack_Base.PrimalItemArmor_MekBackpack_Base_C.BlueprintUnequipped");

	UPrimalItemArmor_MekBackpack_Base_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_MekBackpack_Base.PrimalItemArmor_MekBackpack_Base_C.ExecuteUbergraph_PrimalItemArmor_MekBackpack_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MekBackpack_Base_C::ExecuteUbergraph_PrimalItemArmor_MekBackpack_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MekBackpack_Base.PrimalItemArmor_MekBackpack_Base_C.ExecuteUbergraph_PrimalItemArmor_MekBackpack_Base");

	UPrimalItemArmor_MekBackpack_Base_C_ExecuteUbergraph_PrimalItemArmor_MekBackpack_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

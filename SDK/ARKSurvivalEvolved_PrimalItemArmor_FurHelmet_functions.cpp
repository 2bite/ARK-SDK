// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_FurHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_FurHelmet.PrimalItemArmor_FurHelmet_C.ExecuteUbergraph_PrimalItemArmor_FurHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_FurHelmet_C::ExecuteUbergraph_PrimalItemArmor_FurHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_FurHelmet.PrimalItemArmor_FurHelmet_C.ExecuteUbergraph_PrimalItemArmor_FurHelmet");

	UPrimalItemArmor_FurHelmet_C_ExecuteUbergraph_PrimalItemArmor_FurHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

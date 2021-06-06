// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ChitinGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ChitinGloves.PrimalItemArmor_ChitinGloves_C.ExecuteUbergraph_PrimalItemArmor_ChitinGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ChitinGloves_C::ExecuteUbergraph_PrimalItemArmor_ChitinGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ChitinGloves.PrimalItemArmor_ChitinGloves_C.ExecuteUbergraph_PrimalItemArmor_ChitinGloves");

	UPrimalItemArmor_ChitinGloves_C_ExecuteUbergraph_PrimalItemArmor_ChitinGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

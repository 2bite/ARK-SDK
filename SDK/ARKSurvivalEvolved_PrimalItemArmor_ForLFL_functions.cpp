// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ForLFL_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ForLFL.PrimalItemArmor_ForLFL_C.ExecuteUbergraph_PrimalItemArmor_ForLFL
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ForLFL_C::ExecuteUbergraph_PrimalItemArmor_ForLFL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ForLFL.PrimalItemArmor_ForLFL_C.ExecuteUbergraph_PrimalItemArmor_ForLFL");

	UPrimalItemArmor_ForLFL_C_ExecuteUbergraph_PrimalItemArmor_ForLFL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

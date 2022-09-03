// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderRadar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekStriderRadar.PrimalItemArmor_TekStriderRadar_C.ExecuteUbergraph_PrimalItemArmor_TekStriderRadar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekStriderRadar_C::ExecuteUbergraph_PrimalItemArmor_TekStriderRadar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderRadar.PrimalItemArmor_TekStriderRadar_C.ExecuteUbergraph_PrimalItemArmor_TekStriderRadar");

	UPrimalItemArmor_TekStriderRadar_C_ExecuteUbergraph_PrimalItemArmor_TekStriderRadar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

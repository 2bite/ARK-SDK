// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_KaprosuchusSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_KaprosuchusSaddle.PrimalItemArmor_KaprosuchusSaddle_C.ExecuteUbergraph_PrimalItemArmor_KaprosuchusSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_KaprosuchusSaddle_C::ExecuteUbergraph_PrimalItemArmor_KaprosuchusSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_KaprosuchusSaddle.PrimalItemArmor_KaprosuchusSaddle_C.ExecuteUbergraph_PrimalItemArmor_KaprosuchusSaddle");

	UPrimalItemArmor_KaprosuchusSaddle_C_ExecuteUbergraph_PrimalItemArmor_KaprosuchusSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

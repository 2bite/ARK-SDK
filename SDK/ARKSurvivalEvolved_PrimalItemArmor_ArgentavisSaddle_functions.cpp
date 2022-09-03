// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ArgentavisSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ArgentavisSaddle.PrimalItemArmor_ArgentavisSaddle_C.ExecuteUbergraph_PrimalItemArmor_ArgentavisSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ArgentavisSaddle_C::ExecuteUbergraph_PrimalItemArmor_ArgentavisSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ArgentavisSaddle.PrimalItemArmor_ArgentavisSaddle_C.ExecuteUbergraph_PrimalItemArmor_ArgentavisSaddle");

	UPrimalItemArmor_ArgentavisSaddle_C_ExecuteUbergraph_PrimalItemArmor_ArgentavisSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

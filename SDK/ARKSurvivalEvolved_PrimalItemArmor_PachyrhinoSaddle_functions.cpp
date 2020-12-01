// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_PachyrhinoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_PachyrhinoSaddle.PrimalItemArmor_PachyrhinoSaddle_C.ExecuteUbergraph_PrimalItemArmor_PachyrhinoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_PachyrhinoSaddle_C::ExecuteUbergraph_PrimalItemArmor_PachyrhinoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_PachyrhinoSaddle.PrimalItemArmor_PachyrhinoSaddle_C.ExecuteUbergraph_PrimalItemArmor_PachyrhinoSaddle");

	UPrimalItemArmor_PachyrhinoSaddle_C_ExecuteUbergraph_PrimalItemArmor_PachyrhinoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

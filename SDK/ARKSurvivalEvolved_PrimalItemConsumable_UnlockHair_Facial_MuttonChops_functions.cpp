// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Facial_MuttonChops_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Facial_MuttonChops.PrimalItemConsumable_UnlockHair_Facial_MuttonChops_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_MuttonChops
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Facial_MuttonChops_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_MuttonChops(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Facial_MuttonChops.PrimalItemConsumable_UnlockHair_Facial_MuttonChops_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_MuttonChops");

	UPrimalItemConsumable_UnlockHair_Facial_MuttonChops_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_MuttonChops_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

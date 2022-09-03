// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Facial_Goatee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Facial_Goatee.PrimalItemConsumable_UnlockHair_Facial_Goatee_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Goatee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Facial_Goatee_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Goatee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Facial_Goatee.PrimalItemConsumable_UnlockHair_Facial_Goatee_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Goatee");

	UPrimalItemConsumable_UnlockHair_Facial_Goatee_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Goatee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

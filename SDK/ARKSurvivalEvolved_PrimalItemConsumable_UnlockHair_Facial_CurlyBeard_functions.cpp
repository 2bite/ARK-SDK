// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Facial_CurlyBeard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Facial_CurlyBeard.PrimalItemConsumable_UnlockHair_Facial_CurlyBeard_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_CurlyBeard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Facial_CurlyBeard_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_CurlyBeard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Facial_CurlyBeard.PrimalItemConsumable_UnlockHair_Facial_CurlyBeard_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_CurlyBeard");

	UPrimalItemConsumable_UnlockHair_Facial_CurlyBeard_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_CurlyBeard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

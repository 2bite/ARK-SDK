// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TropeSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C.GetInventoryIconDisplayText
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Public, HasDefaults, DLLImport, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemArmor_TropeSaddle_C::STATIC_GetInventoryIconDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C.GetInventoryIconDisplayText");

	UPrimalItemArmor_TropeSaddle_C_GetInventoryIconDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C.ExecuteUbergraph_PrimalItemArmor_TropeSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TropeSaddle_C::ExecuteUbergraph_PrimalItemArmor_TropeSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C.ExecuteUbergraph_PrimalItemArmor_TropeSaddle");

	UPrimalItemArmor_TropeSaddle_C_ExecuteUbergraph_PrimalItemArmor_TropeSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

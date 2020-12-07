// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_C4Charge_EasterBasket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function C4Charge_EasterBasket.C4Charge_EasterBasket_C.UserConstructionScript
// ()

void AC4Charge_EasterBasket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Charge_EasterBasket.C4Charge_EasterBasket_C.UserConstructionScript");

	AC4Charge_EasterBasket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C4Charge_EasterBasket.C4Charge_EasterBasket_C.ExecuteUbergraph_C4Charge_EasterBasket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AC4Charge_EasterBasket_C::ExecuteUbergraph_C4Charge_EasterBasket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Charge_EasterBasket.C4Charge_EasterBasket_C.ExecuteUbergraph_C4Charge_EasterBasket");

	AC4Charge_EasterBasket_C_ExecuteUbergraph_C4Charge_EasterBasket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

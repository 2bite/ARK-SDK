// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapC4_EasterBasket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapC4_EasterBasket.WeapC4_EasterBasket_C.UserConstructionScript
// ()

void AWeapC4_EasterBasket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapC4_EasterBasket.WeapC4_EasterBasket_C.UserConstructionScript");

	AWeapC4_EasterBasket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapC4_EasterBasket.WeapC4_EasterBasket_C.ExecuteUbergraph_WeapC4_EasterBasket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapC4_EasterBasket_C::ExecuteUbergraph_WeapC4_EasterBasket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapC4_EasterBasket.WeapC4_EasterBasket_C.ExecuteUbergraph_WeapC4_EasterBasket");

	AWeapC4_EasterBasket_C_ExecuteUbergraph_WeapC4_EasterBasket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

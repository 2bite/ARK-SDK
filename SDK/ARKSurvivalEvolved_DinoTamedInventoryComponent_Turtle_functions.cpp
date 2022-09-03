// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Turtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C.BPOverrideItemMinimumUseInterval
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDinoTamedInventoryComponent_Turtle_C::BPOverrideItemMinimumUseInterval(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C.BPOverrideItemMinimumUseInterval");

	UDinoTamedInventoryComponent_Turtle_C_BPOverrideItemMinimumUseInterval_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Turtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Turtle_C::ExecuteUbergraph_DinoTamedInventoryComponent_Turtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Turtle");

	UDinoTamedInventoryComponent_Turtle_C_ExecuteUbergraph_DinoTamedInventoryComponent_Turtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

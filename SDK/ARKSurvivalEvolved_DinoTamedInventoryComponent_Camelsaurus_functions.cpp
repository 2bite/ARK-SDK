// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Camelsaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.BPInitializeInventory
// ()

void UDinoTamedInventoryComponent_Camelsaurus_C::BPInitializeInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.BPInitializeInventory");

	UDinoTamedInventoryComponent_Camelsaurus_C_BPInitializeInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.TakeWaterFromContainers
// ()
// Parameters:
// float                          amountToTake                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          TakenAmount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Camelsaurus_C::TakeWaterFromContainers(float amountToTake, float* TakenAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.TakeWaterFromContainers");

	UDinoTamedInventoryComponent_Camelsaurus_C_TakeWaterFromContainers_Params params;
	params.amountToTake = amountToTake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TakenAmount != nullptr)
		*TakenAmount = params.TakenAmount;
}


// Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.FillWaterContainers
// ()
// Parameters:
// float                          WaterAmount                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          WaterAmountLeft                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Camelsaurus_C::FillWaterContainers(float WaterAmount, float* WaterAmountLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.FillWaterContainers");

	UDinoTamedInventoryComponent_Camelsaurus_C_FillWaterContainers_Params params;
	params.WaterAmount = WaterAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaterAmountLeft != nullptr)
		*WaterAmountLeft = params.WaterAmountLeft;
}


// Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Camelsaurus_C::ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus");

	UDinoTamedInventoryComponent_Camelsaurus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_CropPlot_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.ResetRefreshInterval
// ()

void AStructure_CropPlot_Tek_C::ResetRefreshInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.ResetRefreshInterval");

	AStructure_CropPlot_Tek_C_ResetRefreshInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPInventoryItemUsed
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_CropPlot_Tek_C::BPInventoryItemUsed(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPInventoryItemUsed");

	AStructure_CropPlot_Tek_C_BPInventoryItemUsed_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.CheckInstantGrow
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AStructure_CropPlot_Tek_C::STATIC_CheckInstantGrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.CheckInstantGrow");

	AStructure_CropPlot_Tek_C_CheckInstantGrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_CropPlot_Tek_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPNotifyInventoryItemChange");

	AStructure_CropPlot_Tek_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPGetAdditionalGrowthMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructure_CropPlot_Tek_C::BPGetAdditionalGrowthMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPGetAdditionalGrowthMultiplier");

	AStructure_CropPlot_Tek_C_BPGetAdditionalGrowthMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.UserConstructionScript
// ()

void AStructure_CropPlot_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.UserConstructionScript");

	AStructure_CropPlot_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.ExecuteUbergraph_Structure_CropPlot_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_CropPlot_Tek_C::ExecuteUbergraph_Structure_CropPlot_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.ExecuteUbergraph_Structure_CropPlot_Tek");

	AStructure_CropPlot_Tek_C_ExecuteUbergraph_Structure_CropPlot_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

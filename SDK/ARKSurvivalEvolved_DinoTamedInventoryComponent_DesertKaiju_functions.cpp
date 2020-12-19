// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_DesertKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.BPNotifyItemAdded
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_DesertKaiju_C::BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.BPNotifyItemAdded");

	UDinoTamedInventoryComponent_DesertKaiju_C_BPNotifyItemAdded_Params params;
	params.anItem = anItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.EquipSaddle
// ()

void UDinoTamedInventoryComponent_DesertKaiju_C::EquipSaddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.EquipSaddle");

	UDinoTamedInventoryComponent_DesertKaiju_C_EquipSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_DesertKaiju_C::ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_DesertKaiju.DinoTamedInventoryComponent_DesertKaiju_C.ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju");

	UDinoTamedInventoryComponent_DesertKaiju_C_ExecuteUbergraph_DinoTamedInventoryComponent_DesertKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

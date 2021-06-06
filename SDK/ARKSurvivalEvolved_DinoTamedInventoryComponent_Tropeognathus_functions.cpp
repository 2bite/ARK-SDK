// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Tropeognathus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.BPRemoteInventoryAllowViewing
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_Tropeognathus_C::BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.BPRemoteInventoryAllowViewing");

	UDinoTamedInventoryComponent_Tropeognathus_C_BPRemoteInventoryAllowViewing_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_Tropeognathus_C::CanGrindItems(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItems");

	UDinoTamedInventoryComponent_Tropeognathus_C_CanGrindItems_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItem
// ()
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_Tropeognathus_C::CanGrindItem(class UPrimalItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItem");

	UDinoTamedInventoryComponent_Tropeognathus_C_CanGrindItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Tropeognathus_C::ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus");

	UDinoTamedInventoryComponent_Tropeognathus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

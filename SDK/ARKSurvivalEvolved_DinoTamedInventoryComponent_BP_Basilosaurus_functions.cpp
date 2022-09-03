// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_BP_Basilosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_BP_Basilosaurus.DinoTamedInventoryComponent_BP_Basilosaurus_C.BPInventoryRefresh
// ()

void UDinoTamedInventoryComponent_BP_Basilosaurus_C::BPInventoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_Basilosaurus.DinoTamedInventoryComponent_BP_Basilosaurus_C.BPInventoryRefresh");

	UDinoTamedInventoryComponent_BP_Basilosaurus_C_BPInventoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_BP_Basilosaurus.DinoTamedInventoryComponent_BP_Basilosaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_Basilosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_BP_Basilosaurus_C::ExecuteUbergraph_DinoTamedInventoryComponent_BP_Basilosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_Basilosaurus.DinoTamedInventoryComponent_BP_Basilosaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_Basilosaurus");

	UDinoTamedInventoryComponent_BP_Basilosaurus_C_ExecuteUbergraph_DinoTamedInventoryComponent_BP_Basilosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

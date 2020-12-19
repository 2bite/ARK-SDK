// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Jugbug_Oil_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C.BPInventoryRefresh
// ()

void UDinoTamedInventoryComponent_Jugbug_Oil_C::BPInventoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C.BPInventoryRefresh");

	UDinoTamedInventoryComponent_Jugbug_Oil_C_BPInventoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C.ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Jugbug_Oil_C::ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C.ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil");

	UDinoTamedInventoryComponent_Jugbug_Oil_C_ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

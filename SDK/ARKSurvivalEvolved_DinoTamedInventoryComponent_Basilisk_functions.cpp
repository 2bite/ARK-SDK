// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Basilisk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Basilisk.DinoTamedInventoryComponent_Basilisk_C.ExecuteUbergraph_DinoTamedInventoryComponent_Basilisk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Basilisk_C::ExecuteUbergraph_DinoTamedInventoryComponent_Basilisk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Basilisk.DinoTamedInventoryComponent_Basilisk_C.ExecuteUbergraph_DinoTamedInventoryComponent_Basilisk");

	UDinoTamedInventoryComponent_Basilisk_C_ExecuteUbergraph_DinoTamedInventoryComponent_Basilisk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

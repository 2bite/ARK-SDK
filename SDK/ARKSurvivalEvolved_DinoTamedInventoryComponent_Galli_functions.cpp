// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Galli_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Galli.DinoTamedInventoryComponent_Galli_C.ExecuteUbergraph_DinoTamedInventoryComponent_Galli
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Galli_C::ExecuteUbergraph_DinoTamedInventoryComponent_Galli(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Galli.DinoTamedInventoryComponent_Galli_C.ExecuteUbergraph_DinoTamedInventoryComponent_Galli");

	UDinoTamedInventoryComponent_Galli_C_ExecuteUbergraph_DinoTamedInventoryComponent_Galli_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

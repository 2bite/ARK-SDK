// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Baryonyx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Baryonyx.DinoTamedInventoryComponent_Baryonyx_C.ExecuteUbergraph_DinoTamedInventoryComponent_Baryonyx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Baryonyx_C::ExecuteUbergraph_DinoTamedInventoryComponent_Baryonyx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Baryonyx.DinoTamedInventoryComponent_Baryonyx_C.ExecuteUbergraph_DinoTamedInventoryComponent_Baryonyx");

	UDinoTamedInventoryComponent_Baryonyx_C_ExecuteUbergraph_DinoTamedInventoryComponent_Baryonyx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

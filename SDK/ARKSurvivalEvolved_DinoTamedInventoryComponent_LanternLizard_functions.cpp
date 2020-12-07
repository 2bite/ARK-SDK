// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_LanternLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_LanternLizard.DinoTamedInventoryComponent_LanternLizard_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_LanternLizard_C::ExecuteUbergraph_DinoTamedInventoryComponent_LanternLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_LanternLizard.DinoTamedInventoryComponent_LanternLizard_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternLizard");

	UDinoTamedInventoryComponent_LanternLizard_C_ExecuteUbergraph_DinoTamedInventoryComponent_LanternLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

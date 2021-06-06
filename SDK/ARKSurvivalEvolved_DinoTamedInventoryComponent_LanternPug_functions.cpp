// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_LanternPug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_LanternPug.DinoTamedInventoryComponent_LanternPug_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternPug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_LanternPug_C::ExecuteUbergraph_DinoTamedInventoryComponent_LanternPug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_LanternPug.DinoTamedInventoryComponent_LanternPug_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternPug");

	UDinoTamedInventoryComponent_LanternPug_C_ExecuteUbergraph_DinoTamedInventoryComponent_LanternPug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

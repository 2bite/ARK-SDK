// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Vulture_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Vulture.DinoTamedInventoryComponent_Vulture_C.ExecuteUbergraph_DinoTamedInventoryComponent_Vulture
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Vulture_C::ExecuteUbergraph_DinoTamedInventoryComponent_Vulture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Vulture.DinoTamedInventoryComponent_Vulture_C.ExecuteUbergraph_DinoTamedInventoryComponent_Vulture");

	UDinoTamedInventoryComponent_Vulture_C_ExecuteUbergraph_DinoTamedInventoryComponent_Vulture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

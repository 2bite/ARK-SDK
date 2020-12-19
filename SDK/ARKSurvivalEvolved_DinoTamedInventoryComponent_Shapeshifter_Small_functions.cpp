// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Shapeshifter_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Shapeshifter_Small.DinoTamedInventoryComponent_Shapeshifter_Small_C.ExecuteUbergraph_DinoTamedInventoryComponent_Shapeshifter_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Shapeshifter_Small_C::ExecuteUbergraph_DinoTamedInventoryComponent_Shapeshifter_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Shapeshifter_Small.DinoTamedInventoryComponent_Shapeshifter_Small_C.ExecuteUbergraph_DinoTamedInventoryComponent_Shapeshifter_Small");

	UDinoTamedInventoryComponent_Shapeshifter_Small_C_ExecuteUbergraph_DinoTamedInventoryComponent_Shapeshifter_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

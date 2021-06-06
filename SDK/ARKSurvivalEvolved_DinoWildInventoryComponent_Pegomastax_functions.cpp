// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoWildInventoryComponent_Pegomastax_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoWildInventoryComponent_Pegomastax.DinoWildInventoryComponent_Pegomastax_C.ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoWildInventoryComponent_Pegomastax_C::ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoWildInventoryComponent_Pegomastax.DinoWildInventoryComponent_Pegomastax_C.ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax");

	UDinoWildInventoryComponent_Pegomastax_C_ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

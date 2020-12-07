// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_DodoRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_DodoRex.DinoTamedInventoryComponent_DodoRex_C.ExecuteUbergraph_DinoTamedInventoryComponent_DodoRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_DodoRex_C::ExecuteUbergraph_DinoTamedInventoryComponent_DodoRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_DodoRex.DinoTamedInventoryComponent_DodoRex_C.ExecuteUbergraph_DinoTamedInventoryComponent_DodoRex");

	UDinoTamedInventoryComponent_DodoRex_C_ExecuteUbergraph_DinoTamedInventoryComponent_DodoRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

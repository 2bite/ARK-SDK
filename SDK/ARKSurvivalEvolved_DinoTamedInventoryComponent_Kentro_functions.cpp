// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Kentro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Kentro.DinoTamedInventoryComponent_Kentro_C.ExecuteUbergraph_DinoTamedInventoryComponent_Kentro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Kentro_C::ExecuteUbergraph_DinoTamedInventoryComponent_Kentro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Kentro.DinoTamedInventoryComponent_Kentro_C.ExecuteUbergraph_DinoTamedInventoryComponent_Kentro");

	UDinoTamedInventoryComponent_Kentro_C_ExecuteUbergraph_DinoTamedInventoryComponent_Kentro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

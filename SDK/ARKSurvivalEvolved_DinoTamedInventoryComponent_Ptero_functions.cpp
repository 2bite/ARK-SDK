// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Ptero_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Ptero.DinoTamedInventoryComponent_Ptero_C.ExecuteUbergraph_DinoTamedInventoryComponent_Ptero
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Ptero_C::ExecuteUbergraph_DinoTamedInventoryComponent_Ptero(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Ptero.DinoTamedInventoryComponent_Ptero_C.ExecuteUbergraph_DinoTamedInventoryComponent_Ptero");

	UDinoTamedInventoryComponent_Ptero_C_ExecuteUbergraph_DinoTamedInventoryComponent_Ptero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

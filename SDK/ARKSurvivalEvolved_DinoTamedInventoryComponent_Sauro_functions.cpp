// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Sauro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Sauro.DinoTamedInventoryComponent_Sauro_C.ExecuteUbergraph_DinoTamedInventoryComponent_Sauro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Sauro_C::ExecuteUbergraph_DinoTamedInventoryComponent_Sauro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Sauro.DinoTamedInventoryComponent_Sauro_C.ExecuteUbergraph_DinoTamedInventoryComponent_Sauro");

	UDinoTamedInventoryComponent_Sauro_C_ExecuteUbergraph_DinoTamedInventoryComponent_Sauro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Terrorbird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Terrorbird.DinoTamedInventoryComponent_Terrorbird_C.ExecuteUbergraph_DinoTamedInventoryComponent_Terrorbird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Terrorbird_C::ExecuteUbergraph_DinoTamedInventoryComponent_Terrorbird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Terrorbird.DinoTamedInventoryComponent_Terrorbird_C.ExecuteUbergraph_DinoTamedInventoryComponent_Terrorbird");

	UDinoTamedInventoryComponent_Terrorbird_C_ExecuteUbergraph_DinoTamedInventoryComponent_Terrorbird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

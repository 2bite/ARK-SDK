// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Dodo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Dodo.DinoTamedInventoryComponent_Dodo_C.ExecuteUbergraph_DinoTamedInventoryComponent_Dodo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Dodo_C::ExecuteUbergraph_DinoTamedInventoryComponent_Dodo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Dodo.DinoTamedInventoryComponent_Dodo_C.ExecuteUbergraph_DinoTamedInventoryComponent_Dodo");

	UDinoTamedInventoryComponent_Dodo_C_ExecuteUbergraph_DinoTamedInventoryComponent_Dodo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

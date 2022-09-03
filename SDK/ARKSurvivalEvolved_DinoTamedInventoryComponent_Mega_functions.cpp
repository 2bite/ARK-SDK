// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Mega.DinoTamedInventoryComponent_Mega_C.ExecuteUbergraph_DinoTamedInventoryComponent_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Mega_C::ExecuteUbergraph_DinoTamedInventoryComponent_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Mega.DinoTamedInventoryComponent_Mega_C.ExecuteUbergraph_DinoTamedInventoryComponent_Mega");

	UDinoTamedInventoryComponent_Mega_C_ExecuteUbergraph_DinoTamedInventoryComponent_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

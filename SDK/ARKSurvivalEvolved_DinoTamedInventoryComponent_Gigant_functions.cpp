// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Gigant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Gigant.DinoTamedInventoryComponent_Gigant_C.ExecuteUbergraph_DinoTamedInventoryComponent_Gigant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Gigant_C::ExecuteUbergraph_DinoTamedInventoryComponent_Gigant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Gigant.DinoTamedInventoryComponent_Gigant_C.ExecuteUbergraph_DinoTamedInventoryComponent_Gigant");

	UDinoTamedInventoryComponent_Gigant_C_ExecuteUbergraph_DinoTamedInventoryComponent_Gigant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

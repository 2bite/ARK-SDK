// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Amargasaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Amargasaurus.DinoTamedInventoryComponent_Amargasaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Amargasaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Amargasaurus_C::ExecuteUbergraph_DinoTamedInventoryComponent_Amargasaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Amargasaurus.DinoTamedInventoryComponent_Amargasaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Amargasaurus");

	UDinoTamedInventoryComponent_Amargasaurus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Amargasaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

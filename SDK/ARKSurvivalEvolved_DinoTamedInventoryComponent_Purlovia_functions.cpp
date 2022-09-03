// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Purlovia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Purlovia.DinoTamedInventoryComponent_Purlovia_C.ExecuteUbergraph_DinoTamedInventoryComponent_Purlovia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Purlovia_C::ExecuteUbergraph_DinoTamedInventoryComponent_Purlovia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Purlovia.DinoTamedInventoryComponent_Purlovia_C.ExecuteUbergraph_DinoTamedInventoryComponent_Purlovia");

	UDinoTamedInventoryComponent_Purlovia_C_ExecuteUbergraph_DinoTamedInventoryComponent_Purlovia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

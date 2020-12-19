// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Kaprosuchus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Kaprosuchus.DinoTamedInventoryComponent_Kaprosuchus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Kaprosuchus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Kaprosuchus_C::ExecuteUbergraph_DinoTamedInventoryComponent_Kaprosuchus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Kaprosuchus.DinoTamedInventoryComponent_Kaprosuchus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Kaprosuchus");

	UDinoTamedInventoryComponent_Kaprosuchus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Kaprosuchus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

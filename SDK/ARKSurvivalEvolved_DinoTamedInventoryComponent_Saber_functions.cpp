// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Saber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Saber.DinoTamedInventoryComponent_Saber_C.ExecuteUbergraph_DinoTamedInventoryComponent_Saber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Saber_C::ExecuteUbergraph_DinoTamedInventoryComponent_Saber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Saber.DinoTamedInventoryComponent_Saber_C.ExecuteUbergraph_DinoTamedInventoryComponent_Saber");

	UDinoTamedInventoryComponent_Saber_C_ExecuteUbergraph_DinoTamedInventoryComponent_Saber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Mammoth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Mammoth.DinoTamedInventoryComponent_Mammoth_C.ExecuteUbergraph_DinoTamedInventoryComponent_Mammoth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Mammoth_C::ExecuteUbergraph_DinoTamedInventoryComponent_Mammoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Mammoth.DinoTamedInventoryComponent_Mammoth_C.ExecuteUbergraph_DinoTamedInventoryComponent_Mammoth");

	UDinoTamedInventoryComponent_Mammoth_C_ExecuteUbergraph_DinoTamedInventoryComponent_Mammoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
